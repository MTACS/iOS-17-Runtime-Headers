
@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXSuggestLessPeopleHelperDelegate> {
    bool  _isBlockingMemoryFeature;
    PXSuggestLessPeopleHelper * _suggestLessPeopleHelper;
    NSString * _userResponse;
}

@property (nonatomic) bool isBlockingMemoryFeature;
@property (nonatomic, retain) PXSuggestLessPeopleHelper *suggestLessPeopleHelper;
@property (nonatomic, retain) NSString *userResponse;

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;

- (void).cxx_destruct;
- (id)_memoryFeatureFromMemory:(id)arg1 forActionType:(id)arg2;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)arg1;
- (void)applyBlacklistFeatureWithActionType:(id)arg1;
- (void)confirmBlacklistingUserAction:(id)arg1 viewSpec:(id)arg2;
- (bool)isBlockingMemoryFeature;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setIsBlockingMemoryFeature:(bool)arg1;
- (void)setSuggestLessPeopleHelper:(id)arg1;
- (void)setUserResponse:(id)arg1;
- (id)suggestLessPeopleHelper;
- (bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;
- (void)suggestLessPeopleInMemory:(id)arg1;
- (id)userResponse;

@end
