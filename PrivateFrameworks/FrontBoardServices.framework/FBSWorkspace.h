
@interface FBSWorkspace : NSObject <BSDescriptionProviding, BSServiceConnectionEndpointMonitorDelegate> {
    FBSSerialQueue * _callOutQueue;
    BSServiceConnectionEndpointMonitor * _connectionEndpointMonitor;
    BSServiceConnectionEndpoint * _defaultShellEndpoint;
    <FBSWorkspaceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_identifierToScenesSource;
    <BSServiceDispatchingQueue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *defaultShellEndpoint;
@property (nonatomic, readonly) <FBSWorkspaceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *scenes;
@property (readonly) Class superclass;

+ (void)_registerBlockForWorkspaceCreation:(id /* block */)arg1;
+ (id)_sharedWorkspaceIfExists;

- (void).cxx_destruct;
- (void)_activate;
- (void)_activate:(bool)arg1;
- (id)_callOutQueue;
- (void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_initWithOptions:(id)arg1;
- (id)_initWithSerialQueue:(id)arg1;
- (void)_queue_registerSource:(id)arg1;
- (id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(bool)arg2;
- (void)_queue_unregisterSource:(id)arg1;
- (void)_registerSource:(id)arg1;
- (void)_registerSourceEndpoint:(id)arg1;
- (id)_scenesClientForEndpoint:(id)arg1;
- (void)_unregisterSource:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultService;
- (id)defaultServiceForEndpoint:(id)arg1;
- (id)defaultShellEndpoint;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateScenesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2;
- (void)monitor:(id)arg1 willLoseEndpoint:(id)arg2;
- (void)requestDestructionOfScene:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)sceneWithIdentifier:(id)arg1;
- (id)scenes;
- (id)serviceForEndpoint:(id)arg1 withIdentifier:(id)arg2;
- (id)serviceQueue;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
