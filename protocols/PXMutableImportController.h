
@protocol PXMutableImportController <NSObject>

@required

- (bool)hasLoadedInitialBatchOfAssets;
- (bool)isDeletingAssets;
- (bool)isImportingAssets;
- (bool)isLoadingContent;
- (bool)isLoadingInitialBatchOfAssets;
- (bool)isUserRequiredToTrustHostOnSourceDevice;
- (void)setDeletingAssets:(bool)arg1;
- (void)setHasLoadedInitialBatchOfAssets:(bool)arg1;
- (void)setImportingAssets:(bool)arg1;
- (void)setLoadingContent:(bool)arg1;
- (void)setLoadingInitialBatchOfAssets:(bool)arg1;
- (void)setUserRequiredToTrustHostOnSourceDevice:(bool)arg1;

@end
