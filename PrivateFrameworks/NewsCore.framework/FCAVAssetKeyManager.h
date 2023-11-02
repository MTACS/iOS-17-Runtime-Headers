
@interface FCAVAssetKeyManager : NSObject <AVContentKeySessionDelegate, FCAVAssetKeyManagerType> {
    <FCAVAssetKeyCacheType> * _cache;
    FCThreadSafeMutableArray * _fetchRequests;
    <FCAVAssetKeyServiceType> * _service;
    NFLazy * _sharedContentKeySession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
- (void)fetchKeysWithIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)refreshKeysIfNearExpiration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerAVURLAssetForAutomaticKeyManagement:(id)arg1;

@end
