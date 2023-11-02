
@interface VCCompanionSyncService : NSObject <SYServiceDelegate, VCCompanionSyncSessionDelegate> {
    NSSet * _currentDataHandlers;
    VCCompanionSyncSession * _currentSession;
    VCNRDeviceSyncService * _currentSyncService;
    WFDebouncer * _debouncer;
    <VCCompanionSyncServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    SYService * _service;
    <VCSyncDataEndpoint> * _syncDataEndpoint;
}

@property (nonatomic, copy) NSSet *currentDataHandlers;
@property (nonatomic, retain) VCCompanionSyncSession *currentSession;
@property (nonatomic, copy) VCNRDeviceSyncService *currentSyncService;
@property (nonatomic, readonly) WFDebouncer *debouncer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCCompanionSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) SYService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <VCSyncDataEndpoint> *syncDataEndpoint;

- (void).cxx_destruct;
- (void)companionSyncSession:(id)arg1 didFinishWithError:(id)arg2;
- (void)companionSyncSession:(id)arg1 didUpdateProgress:(double)arg2;
- (void)companionSyncSessionDidFinishSendingChanges:(id)arg1;
- (void)configureReasonForUnderlyingSession:(id)arg1 withSession:(id)arg2;
- (id)currentDataHandlers;
- (id)currentSession;
- (id)currentSyncService;
- (void)dealloc;
- (id)debouncer;
- (id)delegate;
- (id)initWithSyncDataEndpoint:(id)arg1;
- (bool)isRunningOnWatch;
- (id)queue;
- (void)requestFullResync;
- (void)requestSync;
- (void)requestSyncImmediately;
- (void)resetSession;
- (void)resumeServiceIfNecessary;
- (id)service;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (void)setCurrentDataHandlers:(id)arg1;
- (void)setCurrentSession:(id)arg1;
- (void)setCurrentSyncService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)syncDataEndpoint;
- (void)updateCurrentSyncServiceIfNecessary;
- (void)updateSyncDataHandlers;

@end
