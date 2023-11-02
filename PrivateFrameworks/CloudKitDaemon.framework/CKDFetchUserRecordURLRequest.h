
@interface CKDFetchUserRecordURLRequest : CKDURLRequest {
    id /* block */  _recordFetchedBlock;
    CKRecord * _userRecord;
}

@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) CKRecord *userRecord;

- (void).cxx_destruct;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id /* block */)recordFetchedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setUserRecord:(id)arg1;
- (id)userRecord;

@end
