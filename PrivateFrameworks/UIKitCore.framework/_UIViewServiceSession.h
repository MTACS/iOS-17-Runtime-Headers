
@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {
    NSXPCConnection * _connection;
    _UIViewServiceDeputyManager * _deputyManager;
    _UIAsyncInvocation * _invalidationInvocation;
    _UIViewServiceSessionManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _terminationHandler;
    NSUUID * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) _UIViewServiceSessionManager *manager;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ terminationHandler;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (void)initialize;
+ (id)sessionWithConnection:(id)arg1 manager:(id)arg2;

- (void)_invalidateUnconditionallyThen:(id /* block */)arg1;
- (void)_objc_initiateDealloc;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)containingViewControllerClassNameForViewControllerOperator:(id)arg1;
- (void)dealloc;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;
- (void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2;
- (bool)isExtensionServiceViewControllerOperator:(id)arg1;
- (id)mainStoryboardNameForViewControllerOperator:(id)arg1;
- (id)manager;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id /* block */)arg2;
- (bool)requiresExtensionContextForViewControllerOperator:(id)arg1;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id /* block */)terminationHandler;
- (id)uniqueIdentifier;
- (void)unregisterDeputyClass:(Class)arg1;
- (id)viewControllerClassNameForViewControllerOperator:(id)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewController:(id)arg2 contextToken:(id)arg3;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;

@end
