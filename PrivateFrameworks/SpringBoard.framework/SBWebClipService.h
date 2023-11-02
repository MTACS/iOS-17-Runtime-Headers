
@interface SBWebClipService : NSObject <BSServiceConnectionListenerDelegate, SBSWebClipServiceClientToServerInterface> {
    SBApplicationController * _applicationController;
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    FBServiceClientAuthenticator * _legacyClientAuthenticator;
    SBLockScreenManager * _lockScreenManager;
    NSString * _pendingBundleIdentifier;
    unsigned long long  _pendingLaunchGenerationCount;
    NSNumber * _pendingLaunchOrigin;
    double  _pendingLaunchTimeout;
    NSString * _pendingWebClipIdentifier;
    SBApplicationPlaceholderController * _placeholderController;
    SBMainDisplaySceneManager * _sceneManager;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    SBMainWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pendingLaunchTimeout;
@property (readonly) Class superclass;

+ (id)bestWebClipForTargetContentIdentifier:(id)arg1 fromWebClips:(id)arg2;

- (void).cxx_destruct;
- (void)_applicationsDidChange:(id)arg1;
- (void)_beginWaitingForBundleIdentifier:(id)arg1 webClipIdentifier:(id)arg2 launchOrigin:(id)arg3;
- (void)_clearPendingLaunch;
- (void)_generateUserActivityDataFromUserActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_placeholdersDidChange:(id)arg1;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_removeConnection:(id)arg1;
- (void)buildLaunchActionsForAppClipWithWebClipIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initForTestingWithPlaceholderController:(id)arg1 applicationController:(id)arg2;
- (id)initWithWorkspace:(id)arg1 sceneManager:(id)arg2 placeholderController:(id)arg3 applicationController:(id)arg4 lockScreenManager:(id)arg5;
- (void)launchWebClipWithIdentifier:(id)arg1 origin:(id)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (double)pendingLaunchTimeout;
- (void)prepareToLaunchWebClipWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)setPendingLaunchTimeout:(double)arg1;
- (id)targetApplicationBundleIdentifierForWebClip:(id)arg1;
- (void)updateWebClipPropertiesWithIdentifier:(id)arg1;

@end
