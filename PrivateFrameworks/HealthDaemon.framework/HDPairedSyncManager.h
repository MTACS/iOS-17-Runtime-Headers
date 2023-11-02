
@interface HDPairedSyncManager : NSObject <HDDiagnosticObject, PSYSyncCoordinatorDelegate> {
    PSYSyncCoordinator * _pairedSyncCoordinator;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _unfinishedSyncSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) PSYSyncCoordinator *syncCoordinator;

+ (id)syncCoordinatorWithServiceName:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (bool)permitSynchronization;
- (id)syncCoordinator;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;

@end
