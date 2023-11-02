
@interface FCAVAssetFactory : NSObject <FCAVAssetFactoryType> {
    <FCAVAssetCacheType> * _assetCache;
    <FCAVAssetKeyCacheType> * _assetKeyCache;
    <FCAVAssetKeyManagerType> * _assetKeyManager;
    <FCAVAssetResourceLoaderType> * _assetResourceLoader;
    FCMapTable * _assets;
    NFUnfairLock * _assetsLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetWithIdentifier:(id)arg1 remoteURL:(id)arg2 overrideMIMEType:(id)arg3;
- (id)init;

@end
