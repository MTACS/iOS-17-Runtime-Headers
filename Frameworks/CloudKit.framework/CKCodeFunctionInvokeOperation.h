
@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation <CKCodeFunctionInvokeOperationCallbacks> {
    NSURL * _clientRuntimeProvidedServiceURL;
    id /* block */  _functionInvokeCompletionBlock;
    NSString * _functionName;
    bool  _local;
    NSError * _responseError;
    NSData * _serializedRequest;
    NSData * _serializedResponse;
    NSString * _serviceName;
    bool  _shouldFetchAssetContentInMemory;
}

@property (nonatomic, readonly) <CKCodeFunctionInvokeOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, copy) NSURL *clientRuntimeProvidedServiceURL;
@property (nonatomic, copy) id /* block */ functionInvokeCompletionBlock;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic) bool local;
@property (nonatomic, readonly) CKCodeFunctionInvokeOperationInfo *operationInfo;
@property (nonatomic, retain) NSError *responseError;
@property (nonatomic, copy) NSData *serializedRequest;
@property (nonatomic, copy) NSData *serializedResponse;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) bool shouldFetchAssetContentInMemory;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (id)clientRuntimeProvidedServiceURL;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id /* block */)functionInvokeCompletionBlock;
- (id)functionName;
- (void)handleInitialResponseReceived:(id)arg1 reply:(id /* block */)arg2;
- (void)handleReplaceLocalWithWireSerializations:(id)arg1 encryptedMasterKeys:(id)arg2 wireEnvelopes:(id)arg3 reply:(id /* block */)arg4;
- (void)handleReplaceWireSerializationsWithRecords:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 local:(bool)arg4;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 local:(bool)arg4;
- (bool)local;
- (id)responseError;
- (id)serializedRequest;
- (id)serializedResponse;
- (id)serviceName;
- (void)setClientRuntimeProvidedServiceURL:(id)arg1;
- (void)setFunctionInvokeCompletionBlock:(id /* block */)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setLocal:(bool)arg1;
- (void)setResponseError:(id)arg1;
- (void)setSerializedRequest:(id)arg1;
- (void)setSerializedResponse:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldFetchAssetContentInMemory:(bool)arg1;
- (bool)shouldFetchAssetContentInMemory;

@end
