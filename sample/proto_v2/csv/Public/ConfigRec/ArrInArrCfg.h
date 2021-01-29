/**
 * This file is generated by xresloader 2.10.1, please don't edit it.
 * You can find more information about this xresloader on https://xresloader.atframe.work/ .
 * If there is any problem, please find or report issues on https://github.com/xresloader/xresloader/issues .
 */
#pragma once
// Test arr_in_arr_cfg

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/DataTable.h"
#include "ConfigRec/ArrInArr.h"
#include "ConfigRec/TestMsgVerifier.h"
#include "ArrInArrCfg.generated.h"


USTRUCT(BlueprintType)
struct FArrInArrCfg : public FTableRowBase
{
    GENERATED_USTRUCT_BODY()

    // Start of fields
    /** Field Type: STRING, Name: Name, Index: 0. This field is generated for UE Editor compatible. **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FName Name;

    // This is a Key
    /** Field Type: INT, Name: Id, Index: 1 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    int32 Id;

    /** Field Type: MESSAGE, Name: Arr, Index: 2 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< FArrInArr > Arr;

    /** Field Type: INT, Name: TestPlainIntArr, Index: 3 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< int32 > TestPlainIntArr;

    /** Field Type: INT, Name: TestPlainEnumArr, Index: 4 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< int32 > TestPlainEnumArr;

    /** Field Type: MESSAGE, Name: TestPlainMsg, Index: 5 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    FTestMsgVerifier TestPlainMsg;

    /** Field Type: MESSAGE, Name: TestPlainMsgArr, Index: 6 **/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "XResConfig")
    TArray< FTestMsgVerifier > TestPlainMsgArr;

};


UCLASS(Blueprintable, BlueprintType)
class UArrInArrCfgHelper : public UObject
{
    GENERATED_BODY()

public:
    UArrInArrCfgHelper();

    void OnReload();

    static FName GetRowName(int32 Id);

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    FName GetDataRowName(int32 Id) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    FName GetTableRowName(const FArrInArrCfg& TableRow) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    const FArrInArrCfg& GetDataRowByName(const FName& Name, bool& IsValid) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    const FArrInArrCfg& GetDataRowByKey(int32 Id, bool& IsValid) const;

    bool ForeachRow(TFunctionRef<void (const FName& Key, const FArrInArrCfg& Value)> Predicate) const;

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    UDataTable* GetRawDataTable(bool& IsValid) const;

    static void ClearRow(FArrInArrCfg& TableRow);

    UFUNCTION(BlueprintCallable, Category = "XResConfig")
    void ClearDataRow(FArrInArrCfg& TableRow) const;

private:
    TSharedPtr<ConstructorHelpers::FObjectFinder<UDataTable> > Loader;
    UDataTable* DataTable;
    FArrInArrCfg Empty;
};

