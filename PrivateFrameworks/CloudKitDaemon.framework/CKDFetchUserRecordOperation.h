
@interface CKDFetchUserRecordOperation : CKDFetchRecordsOperation {
    CKRecord * _userRecord;
}

@property (nonatomic, retain) CKRecord *userRecord;

- (void).cxx_destruct;
- (id)analyticsPayload;
- (void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2;
- (void)main;
- (int)operationType;
- (void)setUserRecord:(id)arg1;
- (id)userRecord;

@end
