
@interface HDCloudSyncModifyRecordZonesOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    CKContainer * _container;
    CKDatabase * _database;
    NSArray * _recordZoneIDsToDelete;
    NSArray * _recordZonesToSave;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *recordZoneIDsToDelete;
@property (nonatomic, copy) NSArray *recordZonesToSave;
@property (readonly) Class superclass;

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)_limitExceededForSavingRecordZones:(id)arg1 deletingRecordZoneIDs:(id)arg2 error:(id)arg3;
- (void)_saveRecordZones:(id)arg1 deleteRecordZoneIDs:(id)arg2;
- (id)initWithConfiguration:(id)arg1 container:(id)arg2 recordZonesToSave:(id)arg3 recordZoneIDsToDelete:(id)arg4;
- (id)initWithConfiguration:(id)arg1 container:(id)arg2 scope:(long long)arg3 recordZonesToSave:(id)arg4 recordZoneIDsToDelete:(id)arg5;
- (void)main;
- (id)recordZoneIDsToDelete;
- (id)recordZonesToSave;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end
