
@interface CKDCodeLocalFunctionInvokeURLRequest : CKDURLRequest {
    NSString * _functionName;
    NSURL * _resolvedBaseURL;
    NSData * _serializedParameters;
    id /* block */  _serializedResultsCallback;
    NSString * _serviceName;
}

@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, copy) NSURL *resolvedBaseURL;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, copy) id /* block */ serializedResultsCallback;
@property (nonatomic, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (bool)allowsAnonymousAccount;
- (long long)databaseScope;
- (Class)expectedResponseClass;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)functionName;
- (id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 resolvedBaseURL:(id)arg5;
- (bool)parsingStandaloneMessage;
- (long long)partitionType;
- (void)prepareRequestOperationsForRequest:(id)arg1;
- (id)requestBodyStream;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (bool)requestGETPreAuth;
- (Class)requestMessageClass;
- (id)resolvedBaseURL;
- (id)serializedParameters;
- (id /* block */)serializedResultsCallback;
- (long long)serverType;
- (id)serviceName;
- (void)setFunctionName:(id)arg1;
- (void)setResolvedBaseURL:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setSerializedResultsCallback:(id /* block */)arg1;
- (void)setServiceName:(id)arg1;
- (bool)shouldCompressBody;
- (id)url;

@end
