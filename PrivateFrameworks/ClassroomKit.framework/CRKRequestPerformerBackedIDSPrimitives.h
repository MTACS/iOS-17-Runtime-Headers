
@interface CRKRequestPerformerBackedIDSPrimitives : NSObject <CRKIDSPrimitives> {
    CATOperationQueue * _operationQueue;
    <CRKRequestPerformingProtocol> * _requestPerformer;
}

@property (nonatomic, readonly, copy) NSDictionary *debugInfo;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;
@property (nonatomic, readonly) <CRKRequestPerformingProtocol> *requestPerformer;

- (void).cxx_destruct;
- (void)addAllowedAppleIDsToFirewall:(id)arg1 completion:(id /* block */)arg2;
- (id)debugInfo;
- (void)fetchFirewallAllowedAppleIDs:(id /* block */)arg1;
- (id)initWithRequestPerformer:(id)arg1 operationQueue:(id)arg2;
- (id)operationQueue;
- (void)removeAllowedAppleIDsFromFirewall:(id)arg1 completion:(id /* block */)arg2;
- (id)requestPerformer;
- (void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(id /* block */)arg4;
- (void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)subscribeToMessagesWithHandler:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
