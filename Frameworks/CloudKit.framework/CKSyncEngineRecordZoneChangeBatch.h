
@interface CKSyncEngineRecordZoneChangeBatch : NSObject <CKPropertiesDescription> {
    bool  _atomicByZone;
    CKSyncEngineBatch * _deprecatedBatch;
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
}

@property bool atomicByZone;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CKSyncEngineBatch *deprecatedBatch;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *recordIDsToDelete;
@property (readonly, copy) NSArray *recordsToSave;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (bool)atomicByZone;
- (id)deprecatedBatch;
- (id)description;
- (id)init;
- (id)initWithPendingChanges:(id)arg1 recordProvider:(id /* block */)arg2;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 atomicByZone:(bool)arg3;
- (id)initWith__pendingChanges:(id)arg1 recordProvider:(id /* block */)arg2;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (id)redactedDescription;
- (void)setAtomicByZone:(bool)arg1;
- (void)setDeprecatedBatch:(id)arg1;

@end
