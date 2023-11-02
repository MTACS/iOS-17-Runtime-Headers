
@interface SKRExecutionListenerManager : NSObject {
    ENCEncoreServiceLauncher * _encoreServiceLauncher;
    SKRSharedFlowPluginXPCServer * _sharedPluginServer;
}

@property (nonatomic, readonly) ENCEncoreServiceLauncher *encoreServiceLauncher;
@property (nonatomic, readonly) SKRSharedFlowPluginXPCServer *sharedPluginServer;

- (void).cxx_destruct;
- (id)encoreServiceLauncher;
- (id)init;
- (id)sharedPluginServer;

@end
