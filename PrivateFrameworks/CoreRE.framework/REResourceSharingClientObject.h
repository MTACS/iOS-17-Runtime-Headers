
@interface REResourceSharingClientObject : NSObject <REResourceSharingService> {
    struct AssetService { int (**x1)(); } * _assetService;
    unsigned long long  _peerID;
    void * _resourceSharingManager;
}

@property (nonatomic, readonly) struct AssetService { int (**x1)(); }*assetService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long peerID;
@property (nonatomic, readonly) void*resourceSharingManager;
@property (readonly) Class superclass;

- (struct AssetService { int (**x1)(); }*)assetService;
- (id)description;
- (void)fetchResourceAtAssetPath:(id)arg1 withReply:(id /* block */)arg2;
- (id)initWithAssetService:(struct AssetService { int (**x1)(); }*)arg1 resourceSharingManager:(void*)arg2 peerID:(unsigned long long)arg3;
- (void)invalidate;
- (unsigned long long)peerID;
- (id)redactedDescription;
- (void*)resourceSharingManager;
- (void)setSubscriptionOptions:(id)arg1 forResourceAtAssetPath:(id)arg2;
- (void)unsubscribeFromResourceAtAssetPath:(id)arg1;

@end
