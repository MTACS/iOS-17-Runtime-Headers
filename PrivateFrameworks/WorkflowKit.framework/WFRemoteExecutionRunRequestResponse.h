
@interface WFRemoteExecutionRunRequestResponse : WFRemoteExecutionRequest <WFPBCodable> {
    WFRemoteExecutionCoordinator * _coordinator;
    NSError * _error;
    NSData * _errorData;
    WFContentCollection * _output;
    NSMutableArray * _outputData;
    NSString * _runRequestIdentifier;
    NSDictionary * _variables;
    NSMutableArray * _variablesData;
}

@property (nonatomic, retain) WFRemoteExecutionCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) NSData *errorData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFContentCollection *output;
@property (nonatomic, retain) NSMutableArray *outputData;
@property (nonatomic, readonly) NSString *runRequestIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *variables;
@property (nonatomic, retain) NSMutableArray *variablesData;

+ (long long)version;

- (void).cxx_destruct;
- (id)coordinator;
- (id)error;
- (id)errorData;
- (void)inflateOutputData:(id)arg1 fileCoordinator:(id)arg2 completion:(id /* block */)arg3;
- (void)inflateVariablesData:(id)arg1 fileCoordinator:(id)arg2 completion:(id /* block */)arg3;
- (void)inflateWithFileCoordinator:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithRunRequestIdentifier:(id)arg1 variables:(id)arg2 output:(id)arg3 error:(id)arg4;
- (id)output;
- (id)outputData;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (id)runRequestIdentifier;
- (void)setCoordinator:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setOutputData:(id)arg1;
- (void)setVariablesData:(id)arg1;
- (id)variables;
- (id)variablesData;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
