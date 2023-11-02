
@interface PUPhotoKitSuggestLessPersonActionPerformer : PUPhotoKitActionPerformer <PXSuggestLessPeopleHelperDelegate> {
    PXSuggestLessPeopleHelper * _suggestLessPeopleHelper;
}

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;

@end
