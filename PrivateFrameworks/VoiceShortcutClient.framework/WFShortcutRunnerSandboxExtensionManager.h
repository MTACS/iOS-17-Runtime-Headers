
@interface WFShortcutRunnerSandboxExtensionManager : NSObject {
    NSMutableSet * _issuedExtensionHandlers;
    NSMutableSet * _issuedExtensionsAccessResources;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _resignedExtensionsAccessResources;
}

@property (nonatomic, readonly) NSMutableSet *issuedExtensionHandlers;
@property (nonatomic, readonly) NSMutableSet *issuedExtensionsAccessResources;
@property (nonatomic, readonly) NSMutableSet *resignedExtensionsAccessResources;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)asynchronousRemoteDataStoreWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (id)issuedExtensionHandlers;
- (id)issuedExtensionsAccessResources;
- (void)performWithSandboxExtensions:(id)arg1 asynchronousBlock:(id /* block */)arg2;
- (void)performWithSandboxExtensions:(id)arg1 synchronousBlock:(id /* block */)arg2;
- (void)requestExtensionTokensForAccessResources:(id)arg1 completion:(id /* block */)arg2;
- (id)requestExtensionTokensForAccessResources:(id)arg1 rejectedAccessResources:(id*)arg2 error:(id*)arg3;
- (void)requestSandboxExtensionForRunningActionWithAccessResources:(id)arg1 completion:(id /* block */)arg2;
- (bool)requestSandboxExtensionForRunningActionWithAccessResources:(id)arg1 error:(id*)arg2;
- (void)resignIssuedExtensionsWithReason:(id)arg1;
- (id)resignedExtensionsAccessResources;
- (bool)retakeResignedExtensionsWithReason:(id)arg1 error:(id*)arg2;
- (id)synchronousRemoteDataStoreWithErrorHandler:(id /* block */)arg1;
- (void)temporaryRequestSandboxExtensionWithBlock:(id /* block */)arg1;

@end
