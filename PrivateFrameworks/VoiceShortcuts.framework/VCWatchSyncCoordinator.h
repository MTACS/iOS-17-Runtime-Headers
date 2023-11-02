
@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate> {
    SwiftVCDaemonXPCEventHandler * _eventHandler;
    PSYSyncCoordinator * _pairedSyncCoordinator;
    NSObject<OS_dispatch_queue> * _queue;
    VCCompanionSyncService * _service;
    NSMutableSet * _startedSessions;
    <VCSyncDataEndpoint> * _syncDataEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PSYSyncCoordinator *pairedSyncCoordinator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) VCCompanionSyncService *service;
@property (nonatomic, readonly) NSMutableSet *startedSessions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <VCSyncDataEndpoint> *syncDataEndpoint;

- (void).cxx_destruct;
- (void)companionSyncService:(id)arg1 didFinishSyncSession:(id)arg2 withError:(id)arg3;
- (void)companionSyncService:(id)arg1 didRejectSessionWithError:(id)arg2;
- (void)companionSyncService:(id)arg1 outgoingSyncSession:(id)arg2 didUpdateProgress:(double)arg3;
- (void)companionSyncService:(id)arg1 outgoingSyncSessionDidFinishSendingChanges:(id)arg2;
- (long long)companionSyncService:(id)arg1 typeForSession:(id)arg2;
- (bool)companionSyncServiceShouldStartSession:(id)arg1;
- (void)dealloc;
- (id)eventHandler;
- (void)handleDeviceDidChangeVersionNotification;
- (void)handleDidUnpairNotification:(id)arg1;
- (id)initWithSyncDataEndpoint:(id)arg1 eventHandler:(id)arg2;
- (id)pairedSyncCoordinator;
- (id)queue;
- (void)requestSyncIfUnrestricted;
- (id)service;
- (void)startObservingWatchChangeNotifications;
- (id)startedSessions;
- (void)stopObservingWatchChangeNotifications;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (id)syncDataEndpoint;

@end
