
@interface CKDFetchMergeableDeltasURLRequest : CKDURLRequest {
    id /* block */  _deltasFetchedBlock;
    NSArray * _mergeableValueIDs;
    NSMutableDictionary * _mergeableValueIDsByRequestID;
    NSDictionary * _previousContinuationTokens;
}

@property (nonatomic, copy) id /* block */ deltasFetchedBlock;
@property (nonatomic, retain) NSArray *mergeableValueIDs;
@property (nonatomic, retain) NSMutableDictionary *mergeableValueIDsByRequestID;
@property (nonatomic, readonly) NSDictionary *previousContinuationTokens;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (id /* block */)deltasFetchedBlock;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 mergeableValueIDs:(id)arg2 previousContinuationTokens:(id)arg3;
- (id)mergeableValueIDs;
- (id)mergeableValueIDsByRequestID;
- (id)previousContinuationTokens;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setDeltasFetchedBlock:(id /* block */)arg1;
- (void)setMergeableValueIDs:(id)arg1;
- (void)setMergeableValueIDsByRequestID:(id)arg1;
- (id)zoneIDsToLock;

@end
