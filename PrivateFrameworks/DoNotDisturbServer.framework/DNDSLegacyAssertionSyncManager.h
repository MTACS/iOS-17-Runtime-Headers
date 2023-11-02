
@interface DNDSLegacyAssertionSyncManager : NSObject <DNDSAssertionSyncManager> {
    NPSDomainAccessor * _accessor;
    DNDSClientDetailsProvider * _clientDetailsProvider;
    <DNDSLegacyAssertionSyncManagerDataSource> * _dataSource;
    <DNDSAssertionSyncManagerDelegate> * _delegate;
    NPSManager * _npsManager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <DNDSLegacyAssertionSyncManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSAssertionSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupState;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (id)_queue_gizmoUpdateDate;
- (void)_queue_updateCompanionAssertionMirroringForState:(id)arg1;
- (bool)_queue_updateCompanionToggleSyncForGizmoUpdateDate:(id)arg1 modeAssertionUpdateContext:(id)arg2;
- (void)_queue_updateGizmoAssertionSyncWithModeAssertionUpdateContext:(id)arg1;
- (void)_queue_updateGizmoToggleSyncForState:(id)arg1 companionUpdateDate:(id)arg2 reason:(unsigned long long)arg3;
- (void)_queue_updateToggleSyncForReason:(unsigned long long)arg1;
- (void)_updateForReason:(unsigned long long)arg1;
- (void)_updateGizmoAssertionSync;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithClientDetailsProvider:(id)arg1 pairedDevice:(id)arg2;
- (void)resume;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateForStateUpdate:(id)arg1;

@end
