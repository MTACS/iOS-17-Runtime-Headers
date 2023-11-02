
@interface PXPhotoKitAssetCollectionContentSyndicationRemoveSuggestionActionPerformer : PXPhotoKitAssetCollectionActionPerformer {
    bool  _shouldSkipUserConfirmation;
}

@property (nonatomic) bool shouldSkipUserConfirmation;

+ (id)_mediaSpecificMessageForKeyPrefix:(id)arg1 forAssets:(id)arg2;
+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createBarButtonItemForAssetCollectionReference:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;

- (id)_assetsFromAssetCollection;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setShouldSkipUserConfirmation:(bool)arg1;
- (bool)shouldSkipUserConfirmation;

@end
