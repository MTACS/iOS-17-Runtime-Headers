
@interface VCXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    WFTopHitsAppShortcutsUpdater * _appShortcutsUpdater;
    WFContextualActionSpotlightSyncService * _contextualActionSyncService;
    <WFDatabaseProvider> * _databaseProvider;
    SwiftVCDaemonXPCEventHandler * _eventHandler;
    WFWorkflowRunCoordinator * _runCoordinator;
    bool  _skipEntitlementsCheck;
    VCCKShortcutSyncCoordinator * _syncCoordinator;
    <VCSyncDataEndpoint> * _syncDataEndpoint;
    WFTriggerManager * _triggerManager;
    WFTriggerRegistrar * _triggerRegistrar;
    VCVoiceShortcutManager * _voiceShortcutManager;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, readonly) WFTopHitsAppShortcutsUpdater *appShortcutsUpdater;
@property (nonatomic, readonly) WFContextualActionSpotlightSyncService *contextualActionSyncService;
@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWorkflowRunCoordinator *runCoordinator;
@property (nonatomic, readonly) bool skipEntitlementsCheck;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VCCKShortcutSyncCoordinator *syncCoordinator;
@property (nonatomic, readonly) <VCSyncDataEndpoint> *syncDataEndpoint;
@property (nonatomic, readonly) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) WFTriggerRegistrar *triggerRegistrar;
@property (nonatomic, readonly) VCVoiceShortcutManager *voiceShortcutManager;
@property (nonatomic, readonly) NSXPCListener *xpcListener;

- (void).cxx_destruct;
- (id)appShortcutsUpdater;
- (id)contextualActionSyncService;
- (id)databaseProvider;
- (id)endpoint;
- (id)eventHandler;
- (id)initWithDatabaseProvider:(id)arg1 triggerRegistrar:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4 runCoordinator:(id)arg5 eventHandler:(id)arg6 appShortcutsUpdater:(id)arg7 contextualActionSyncService:(id)arg8;
- (id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1;
- (id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 triggerRegistrar:(id)arg3 syncCoordinator:(id)arg4 syncDataEndpoint:(id)arg5 runCoordinator:(id)arg6 eventHandler:(id)arg7 appShortcutsUpdater:(id)arg8 contextualActionSyncService:(id)arg9;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)runCoordinator;
- (bool)skipEntitlementsCheck;
- (id)syncCoordinator;
- (id)syncDataEndpoint;
- (id)triggerManager;
- (id)triggerRegistrar;
- (id)voiceShortcutManager;
- (id)xpcListener;

@end
