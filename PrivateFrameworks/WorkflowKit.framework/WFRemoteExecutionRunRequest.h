
@interface WFRemoteExecutionRunRequest : WFRemoteExecutionRequest <WFPBCodable> {
    NSString * _actionIdentifier;
    WFRemoteExecutionCoordinator * _coordinator;
    WFContentCollection * _input;
    NSMutableArray * _inputData;
    NSDictionary * _processedParameters;
    NSMutableArray * _processedParametersData;
    NSDictionary * _serializedParameters;
    NSDictionary * _variables;
    NSMutableArray * _variablesData;
    NSString * _workflowID;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, retain) WFRemoteExecutionCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFContentCollection *input;
@property (nonatomic, retain) NSMutableArray *inputData;
@property (nonatomic, readonly) NSDictionary *processedParameters;
@property (nonatomic, retain) NSMutableArray *processedParametersData;
@property (nonatomic, readonly) NSDictionary *serializedParameters;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *variables;
@property (nonatomic, retain) NSMutableArray *variablesData;
@property (nonatomic, readonly) NSString *workflowID;

+ (long long)version;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)coordinator;
- (void)inflateInputData:(id)arg1 fileCoordinator:(id)arg2 completion:(id /* block */)arg3;
- (void)inflateProcessedParametersData:(id)arg1 fileCoordinator:(id)arg2 completion:(id /* block */)arg3;
- (void)inflateVariablesData:(id)arg1 fileCoordinator:(id)arg2 completion:(id /* block */)arg3;
- (void)inflateWithFileCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAction:(id)arg1 workflowControllerState:(id)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)input;
- (id)inputData;
- (id)processedParameters;
- (id)processedParametersData;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (id)serializedParameters;
- (void)setCoordinator:(id)arg1;
- (void)setInputData:(id)arg1;
- (void)setProcessedParametersData:(id)arg1;
- (void)setVariablesData:(id)arg1;
- (id)variables;
- (id)variablesData;
- (id)workflowID;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
