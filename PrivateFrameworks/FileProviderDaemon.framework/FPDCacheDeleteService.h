
@interface FPDCacheDeleteService : NSObject {
    FPDExtensionManager * _extensionManager;
}

@property (nonatomic, retain) FPDExtensionManager *extensionManager;

- (void).cxx_destruct;
- (id)allStorageVolumes;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)arg1;
- (void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)extensionManager;
- (bool)getVolume:(int*)arg1 forPath:(id)arg2;
- (id)nonPurgableSpacePerProviderOnVolume:(id)arg1;
- (void)registerActivity;
- (void)registerCacheDeleteCallbacks;
- (void)setExtensionManager:(id)arg1;
- (void)start;

@end
