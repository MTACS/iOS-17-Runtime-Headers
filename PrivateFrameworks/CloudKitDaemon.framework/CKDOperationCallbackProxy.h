
@interface CKDOperationCallbackProxy : NSObject <CKOperationCallbacks> {
    Protocol * _callbackProtocol;
    <CKOperationCallbacks> * _clientOperationCallbackProxy;
}

@property (nonatomic, retain) Protocol *callbackProtocol;
@property (nonatomic, retain) <CKOperationCallbacks> *clientOperationCallbackProxy;

- (void).cxx_destruct;
- (id)callbackProtocol;
- (id)clientOperationCallbackProxy;
- (void)forwardInvocation:(id)arg1;
- (id)initWithClientOperationCallbackProxy:(id)arg1 callbackProtocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setCallbackProtocol:(id)arg1;
- (void)setClientOperationCallbackProxy:(id)arg1;

@end
