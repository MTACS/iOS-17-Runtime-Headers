
@interface PUAssetSharingHelper : NSObject <PXAssetsSharingHelper> {
    <PXAssetsSharingHelperDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXAssetsSharingHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_prepareAssets:(id)arg1 forActivityType:(id)arg2 window:(id)arg3 completion:(id /* block */)arg4;
+ (void)copyAssets:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)prepareAssets:(id)arg1 forActivityType:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1;
- (void)copyAssets:(id)arg1;
- (id)delegate;
- (void)ensureLocalAssetsForCloudPhotoSharing:(id)arg1 completion:(id /* block */)arg2;
- (void)ensureLocalAssetsForRendering:(id)arg1 completion:(id /* block */)arg2;
- (void)ensureLocalAssetsForSyndicationSave:(id)arg1 completion:(id /* block */)arg2;
- (void)ensureRenderingForAssetsWithDeferredProcessingInCollection:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
