
@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest {
    bool  _ignoreMissingDeltas;
    id /* block */  _perReplacementCompletionBlock;
    NSArray * _replaceDeltasRequests;
    NSMutableDictionary * _replacementRequestsByRequestID;
}

@property (nonatomic) bool ignoreMissingDeltas;
@property (nonatomic, copy) id /* block */ perReplacementCompletionBlock;
@property (nonatomic, retain) NSArray *replaceDeltasRequests;
@property (nonatomic, retain) NSMutableDictionary *replacementRequestsByRequestID;

+ (id)requestOperationsForRequest:(id)arg1 replaceDeltasRequests:(id)arg2 ignoreMissingDeltas:(bool)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (id)anonymousUserIDForHTTPHeader;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (bool)handlesAnonymousCKUserIDPropagation;
- (bool)ignoreMissingDeltas;
- (id)initWithOperation:(id)arg1 replaceDeltasRequests:(id)arg2 ignoreMissingDeltas:(bool)arg3;
- (int)isolationLevel;
- (id /* block */)perReplacementCompletionBlock;
- (id)replaceDeltasRequests;
- (id)replacementRequestsByRequestID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setIgnoreMissingDeltas:(bool)arg1;
- (void)setPerReplacementCompletionBlock:(id /* block */)arg1;
- (void)setReplaceDeltasRequests:(id)arg1;
- (void)setReplacementRequestsByRequestID:(id)arg1;
- (id)zoneIDsToLock;

@end
