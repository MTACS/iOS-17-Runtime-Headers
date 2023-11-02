
@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest {
    NSData * _attestationEntropy;
    NSString * _functionName;
    NSArray * _pccWrappedInvocationKeys;
    NSData * _serializedParameters;
    id /* block */  _serializedResultsCallback;
    NSString * _serviceName;
    CKDTrustedTargetWrappedKey * _trustedTargetWrappedInvocationKey;
}

@property (nonatomic, retain) NSData *attestationEntropy;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, copy) NSArray *pccWrappedInvocationKeys;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, copy) id /* block */ serializedResultsCallback;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, copy) CKDTrustedTargetWrappedKey *trustedTargetWrappedInvocationKey;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (bool)allowsAnonymousAccount;
- (id)attestationEntropy;
- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)functionName;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 attestationEntropy:(id)arg5 pccWrappedInvocationKeys:(id)arg6 trustedTargetWrappedInvocationKey:(id)arg7;
- (id)pccWrappedInvocationKeys;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (bool)requestGETPreAuth;
- (id)requestOperationClasses;
- (id)serializedParameters;
- (id /* block */)serializedResultsCallback;
- (id)serviceName;
- (void)setAttestationEntropy:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setPccWrappedInvocationKeys:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setSerializedResultsCallback:(id /* block */)arg1;
- (void)setServiceName:(id)arg1;
- (void)setTrustedTargetWrappedInvocationKey:(id)arg1;
- (id)trustedTargetWrappedInvocationKey;

@end
