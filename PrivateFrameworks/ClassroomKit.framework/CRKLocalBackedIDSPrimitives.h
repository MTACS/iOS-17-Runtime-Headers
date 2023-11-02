
@interface CRKLocalBackedIDSPrimitives : NSObject <CRKIDSPrimitives> {
    NSObject<CRKIDSLocalPrimitives> * _IDSLocalPrimitives;
    <CRKIDSReadinessEvaluating> * _IDSReadinessEvaluator;
    CATOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (nonatomic, readonly) <CRKIDSReadinessEvaluating> *IDSReadinessEvaluator;
@property (nonatomic, readonly, copy) NSDictionary *debugInfo;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)IDSLocalPrimitives;
- (id)IDSReadinessEvaluator;
- (void)addAllowedAppleIDsToFirewall:(id)arg1 completion:(id /* block */)arg2;
- (id)debugInfo;
- (void)fetchFirewallAllowedAppleIDs:(id /* block */)arg1;
- (id)initWithIDSLocalPrimitives:(id)arg1 IDSReadinessEvaluator:(id)arg2;
- (id)initWithIDSLocalPrimitives:(id)arg1 IDSReadinessEvaluator:(id)arg2 operationQueue:(id)arg3;
- (id)operationDebugInfo;
- (id)operationQueue;
- (void)removeAllowedAppleIDsFromFirewall:(id)arg1 completion:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(id /* block */)arg4;
- (void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void)subscribeToMessagesWithHandler:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
