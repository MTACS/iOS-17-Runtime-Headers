
@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    NSData * _cursor;
    NSSet * _desiredAssetKeys;
    unsigned long long  _limit;
    CKQuery * _query;
    NSMutableArray * _queryResponses;
    NSMutableArray * _recordResponses;
    id /* block */  _recordsParsedBlock;
    NSArray * _requestedFields;
    NSData * _resultsCursor;
    bool  _shouldFetchAssetContent;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSData *cursor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *desiredAssetKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, retain) CKQuery *query;
@property (nonatomic, retain) NSMutableArray *queryResponses;
@property (nonatomic, retain) NSMutableArray *recordResponses;
@property (nonatomic, copy) id /* block */ recordsParsedBlock;
@property (nonatomic, retain) NSArray *requestedFields;
@property (nonatomic, retain) NSData *resultsCursor;
@property (nonatomic) bool shouldFetchAssetContent;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)cursor;
- (id)desiredAssetKeys;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 query:(id)arg2 cursor:(id)arg3 limit:(unsigned long long)arg4 requestedFields:(id)arg5 zoneID:(id)arg6;
- (unsigned long long)limit;
- (id)query;
- (id)queryResponses;
- (id)recordResponses;
- (id /* block */)recordsParsedBlock;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (bool)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)requestedFields;
- (bool)requiresCKAnonymousUserIDs;
- (id)resultsCursor;
- (void)setCursor:(id)arg1;
- (void)setDesiredAssetKeys:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryResponses:(id)arg1;
- (void)setRecordResponses:(id)arg1;
- (void)setRecordsParsedBlock:(id /* block */)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (bool)shouldFetchAssetContent;
- (id)zoneID;
- (id)zoneIDsToLock;

@end
