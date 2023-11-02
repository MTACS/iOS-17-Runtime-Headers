
@protocol CKSyncEngineDelegate <NSObject>

@required

- (void)syncEngine:(CKSyncEngine *)arg1 handleEvent:(CKSyncEngineEvent *)arg2;
- (CKSyncEngineRecordZoneChangeBatch *)syncEngine:(CKSyncEngine *)arg1 nextRecordZoneChangeBatchForContext:(CKSyncEngineSendChangesContext *)arg2;

@optional

- (CKSyncEngineFetchChangesOptions *)syncEngine:(CKSyncEngine *)arg1 nextFetchChangesOptionsForContext:(CKSyncEngineFetchChangesContext *)arg2;

@end
