
@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject <CKOperationCallbacks> {
    Protocol * _callbackProtocol;
    SEL  _completionSelector;
    NSString * _operationID;
    CKDOperationInfoCache * _operationInfoCache;
}

@property (nonatomic, retain) Protocol *callbackProtocol;
@property (nonatomic) SEL completionSelector;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic, retain) CKDOperationInfoCache *operationInfoCache;

- (void).cxx_destruct;
- (id)callbackProtocol;
- (SEL)completionSelector;
- (void)forwardInvocation:(id)arg1;
- (id)initWithOperationID:(id)arg1 callbackProtocol:(id)arg2 completionSelector:(SEL)arg3 operationInfoCache:(id)arg4;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)operationID;
- (id)operationInfoCache;
- (void)setCallbackProtocol:(id)arg1;
- (void)setCompletionSelector:(SEL)arg1;
- (void)setOperationID:(id)arg1;
- (void)setOperationInfoCache:(id)arg1;

@end
