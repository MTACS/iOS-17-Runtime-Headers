
@interface FBWorkspaceDomain : NSObject <BSServiceConnectionListenerDelegate> {
    <BSInvalidatable> * _activation;
    bool  _assertsVisibility;
    NSArray * _bgActiveAttributes;
    NSArray * _bgLaunchAttributes;
    NSArray * _bgUtilityAttributes;
    bool  _bootstrapConfigured;
    NSString * _defaultWorkspace;
    NSArray * _fgFocalAttributes;
    NSArray * _fgLaunchAttributes;
    NSArray * _fgNonFocalAttributes;
    NSArray * _fgSupportFocalAttributes;
    NSArray * _fgSupportLaunchAttributes;
    NSArray * _fgSupportNonFocalAttributes;
    NSArray * _fgSupportSuspendedAttributes;
    NSArray * _fgSupportUtilityAttributes;
    NSArray * _fgSuspendedAttributes;
    NSArray * _fgUtilityAttributes;
    NSString * _identifier;
    NSArray * _injectorAttributes;
    bool  _injectorEnabled;
    BSServiceConnectionListener * _listener;
    NSString * _machName;
    bool  _monitorAllSuspendableProcesses;
    NSDictionary * _preregisteredWorkspaces;
    <BSInvalidatable> * _registration;
    bool  _selfAssertRuntime;
    bool  _usesDefaultShellEndpoint;
    NSArray * _utLaunchAttributes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)debugDescription;
+ (id)endpoint;
+ (void)startListener;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
