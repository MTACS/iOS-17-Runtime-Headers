
@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest {
    NSDictionary * _continuationTokens;
    NSMutableDictionary * _mergeableValueIDByRequestID;
    NSArray * _mergeableValueIDs;
    id /* block */  _metadataFetchedBlock;
}

@property (nonatomic, retain) NSDictionary *continuationTokens;
@property (nonatomic, retain) NSMutableDictionary *mergeableValueIDByRequestID;
@property (nonatomic, retain) NSArray *mergeableValueIDs;
@property (nonatomic, copy) id /* block */ metadataFetchedBlock;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (id)continuationTokens;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 mergeableValueIDs:(id)arg2 continuationTokens:(id)arg3;
- (int)isolationLevel;
- (id)mergeableValueIDByRequestID;
- (id)mergeableValueIDs;
- (id /* block */)metadataFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setContinuationTokens:(id)arg1;
- (void)setMergeableValueIDByRequestID:(id)arg1;
- (void)setMergeableValueIDs:(id)arg1;
- (void)setMetadataFetchedBlock:(id /* block */)arg1;
- (id)zoneIDsToLock;

@end
