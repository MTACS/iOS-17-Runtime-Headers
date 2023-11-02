
@interface SBRemoteTransientOverlaySessionManager : NSObject <SBFSceneWorkspaceControllerDelegate, SBRemoteTransientOverlaySessionHostDelegate> {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    <SBRemoteTransientOverlaySessionManagerDelegate> * _delegate;
    SBFSceneWorkspaceController * _sceneWorkspaceController;
    NSMutableDictionary * _sessionIDToSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBRemoteTransientOverlaySessionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSessionWithDefinition:(id)arg1;
- (id)_existingSessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1;
- (id)createSessionWithDefinition:(id)arg1;
- (id)delegate;
- (id)embeddedDisplayWindowSceneForRemoteTransientOverlaySession:(id)arg1;
- (id)existingSessionWithSessionID:(id)arg1 options:(long long)arg2;
- (id)existingSessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (bool)hasSessionWithPendingButtonEvents:(unsigned long long)arg1 options:(long long)arg2;
- (bool)hasSessionWithServiceProcessIdentifier:(int)arg1 options:(long long)arg2;
- (id)init;
- (void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3;
- (bool)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2;
- (bool)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2;
- (bool)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2;
- (void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(id)arg3;
- (bool)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2;
- (id)sessionWithDefinition:(id)arg1 options:(long long)arg2;
- (id)sessionsWithDefinition:(id)arg1 options:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setScene:(id)arg1 shouldActivateUponClientConnection:(bool)arg2 withContextGenerator:(id /* block */)arg3;
- (void)setScene:(id)arg1 shouldBeKeptActiveWhileForeground:(bool)arg2 withContextGenerator:(id /* block */)arg3;

@end
