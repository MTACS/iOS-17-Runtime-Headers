
@interface PXPhotoKitAssetCollectionBlockPersonActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXSuggestLessPeopleHelperDelegate> {
    PXSuggestLessPeopleHelper * _suggestLessPeopleHelper;
}

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (bool)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;

@end
