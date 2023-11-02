
@interface PXPhotoKitFeatureLessActionPerformer : PXPhotoKitAssetActionPerformer <PXSuggestLessPeopleHelperDelegate> {
    PXSuggestLessPeopleHelper * _suggestLessPeopleHelper;
}

+ (id)_facesInCurrentAsset:(id)arg1;
+ (id)_personFromFace:(id)arg1 asset:(id)arg2;
+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (id)_personFromFace:(id)arg1;
- (void)performUserInteractionTask;
- (bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;

@end
