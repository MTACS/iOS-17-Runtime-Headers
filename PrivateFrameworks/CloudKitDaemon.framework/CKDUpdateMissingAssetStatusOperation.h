
@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation {
    NSArray * _assetPutReceipts;
    NSArray * _assetSizes;
    CKDFetchRecordsOperation * _fetchOperation;
    bool  _isPackage;
    CKDModifyRecordsOperation * _modifyOperation;
    CKRecord * _record;
    bool  _recovered;
    CKRecordID * _repairRecordID;
}

@property (nonatomic, retain) NSArray *assetPutReceipts;
@property (nonatomic, retain) NSArray *assetSizes;
@property (nonatomic, retain) CKDFetchRecordsOperation *fetchOperation;
@property (nonatomic) bool isPackage;
@property (nonatomic, retain) CKDModifyRecordsOperation *modifyOperation;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic) bool recovered;
@property (nonatomic, retain) CKRecordID *repairRecordID;
@property (nonatomic) unsigned long long state;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_updateMissingAssetStatus;
- (id)activityCreate;
- (id)assetPutReceipts;
- (id)assetSizes;
- (id)fetchOperation;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (bool)isPackage;
- (void)main;
- (bool)makeStateTransition;
- (id)modifyOperation;
- (int)operationType;
- (id)record;
- (bool)recovered;
- (id)repairRecordID;
- (void)setAssetPutReceipts:(id)arg1;
- (void)setAssetSizes:(id)arg1;
- (void)setFetchOperation:(id)arg1;
- (void)setIsPackage:(bool)arg1;
- (void)setModifyOperation:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecovered:(bool)arg1;
- (void)setRepairRecordID:(id)arg1;

@end
