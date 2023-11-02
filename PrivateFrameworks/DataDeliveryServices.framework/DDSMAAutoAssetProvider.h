
@interface DDSMAAutoAssetProvider : NSObject <DDSMAAutoAssetProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)autoAssetForAssetSelector:(id)arg1 clientID:(id)arg2;
- (void)fetchLockReasonCountForAutoAsset:(id)arg1 callback:(id /* block */)arg2;
- (void)lockAutoAsset:(id)arg1 callback:(id /* block */)arg2;

@end
