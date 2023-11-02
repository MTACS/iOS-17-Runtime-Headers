
@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bindLock;
    PLResult * _cachedBindResult;
    PLLazyObject * _lazyBindToPhotoLibrary;
    NSURL * _photoLibraryURL;
    <PLXPCProxyCreating> * _proxyFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *photoLibraryURL;
@property (readonly) <PLXPCProxyCreating> *proxyFactory;
@property (readonly) Class superclass;

+ (id)clientToServiceSandboxExtensionForURL:(id)arg1;
+ (unsigned long long)maxBindAttemptCount;

- (void).cxx_destruct;
- (id)_attemptBindToPhotoLibrary;
- (id)_bindToPhotoLibrary;
- (id)_bindToPhotoLibraryAndCacheResult;
- (id)_bindToPhotoLibraryIfNecessary;
- (bool)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(id /* block */)arg1;
- (id)_blackholeProxyForProxy:(id)arg1;
- (id)_cachedBindResult;
- (void)_connectionInterrupted:(id)arg1;
- (bool)_isResultAnInterruptionError:(id)arg1;
- (id)_lazilyBindToPhotoLibrary;
- (id)_unboostingRemoteObjectProxy;
- (void)_updateCachedBindResult:(id)arg1;
- (void)addBarrierBlock:(id /* block */)arg1;
- (id)initWithProxyFactory:(id)arg1 photoLibraryURL:(id)arg2;
- (id)photoLibraryURL;
- (id)proxyFactory;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
