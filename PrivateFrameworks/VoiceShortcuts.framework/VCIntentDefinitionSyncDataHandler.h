
@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler {
    SwiftVCDaemonXPCEventHandler * _eventHandler;
}

@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;

+ (int)messageType;

- (void).cxx_destruct;
- (bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (bool)deleteSyncedData:(id*)arg1;
- (id)eventHandler;
- (id)initWithEventHandler:(id)arg1;
- (void)installedApplicationsDidChange:(id)arg1;
- (bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (bool)resetSyncStateForService:(id)arg1 error:(id*)arg2;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3;

@end
