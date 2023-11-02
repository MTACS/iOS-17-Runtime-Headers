
@interface CKDUploadMergeableDeltasURLRequest : CKDURLRequest {
    NSArray * _deltas;
    NSMutableDictionary * _deltasByRequestID;
    id /* block */  _perDeltaCompletionBlock;
    id /* block */  _perReplaceDeltasRequestCompletionBlock;
    NSArray * _replacementRequests;
    NSMutableDictionary * _replacementRequestsByRequestID;
}

@property (nonatomic, readonly, copy) NSArray *deltas;
@property (nonatomic, retain) NSMutableDictionary *deltasByRequestID;
@property (nonatomic, copy) id /* block */ perDeltaCompletionBlock;
@property (nonatomic, copy) id /* block */ perReplaceDeltasRequestCompletionBlock;
@property (nonatomic, readonly, copy) NSArray *replacementRequests;
@property (nonatomic, retain) NSMutableDictionary *replacementRequestsByRequestID;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (id)deltas;
- (id)deltasByRequestID;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (id)initWithOperation:(id)arg1 deltas:(id)arg2 replacementRequests:(id)arg3;
- (id /* block */)perDeltaCompletionBlock;
- (id /* block */)perReplaceDeltasRequestCompletionBlock;
- (id)replacementRequests;
- (id)replacementRequestsByRequestID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setDeltasByRequestID:(id)arg1;
- (void)setPerDeltaCompletionBlock:(id /* block */)arg1;
- (void)setPerReplaceDeltasRequestCompletionBlock:(id /* block */)arg1;
- (void)setReplacementRequestsByRequestID:(id)arg1;
- (id)zoneIDsToLock;

@end
