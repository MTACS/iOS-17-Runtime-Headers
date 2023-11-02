
@interface CKDMovePhotosURLRequest : CKDURLRequest {
    bool  _atomic;
    NSArray * _moveChanges;
    NSMutableDictionary * _recordByRequestID;
    NSMutableDictionary * _recordIDByRequestID;
    id /* block */  _recordPostedBlock;
    long long  _sourceDatabaseScope;
}

@property (nonatomic) bool atomic;
@property (nonatomic, retain) NSArray *moveChanges;
@property (nonatomic, retain) NSMutableDictionary *recordByRequestID;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, copy) id /* block */ recordPostedBlock;
@property (nonatomic) long long sourceDatabaseScope;

- (void).cxx_destruct;
- (bool)atomic;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 moveChanges:(id)arg2 sourceDatabaseScope:(long long)arg3 atomic:(bool)arg4;
- (int)isolationLevel;
- (id)moveChanges;
- (id)recordByRequestID;
- (id)recordIDByRequestID;
- (id /* block */)recordPostedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setAtomic:(bool)arg1;
- (void)setMoveChanges:(id)arg1;
- (void)setRecordByRequestID:(id)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordPostedBlock:(id /* block */)arg1;
- (void)setSourceDatabaseScope:(long long)arg1;
- (long long)sourceDatabaseScope;
- (id)zoneIDsToLock;

@end
