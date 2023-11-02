
@interface WFRemoteExecutionAskEachTimeRequestResponse : WFRemoteExecutionRequest {
    NSError * _error;
    NSDictionary * _inputtedStates;
    NSMutableArray * _inputtedStatesData;
    NSString * _originatingRequestIdentifier;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDictionary *inputtedStates;
@property (nonatomic, retain) NSMutableArray *inputtedStatesData;
@property (nonatomic, readonly) NSString *originatingRequestIdentifier;

+ (long long)version;

- (void).cxx_destruct;
- (id)error;
- (void)inflateInputtedStatesWithAction:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithOriginatingRequestIdentifier:(id)arg1 inputtedStates:(id)arg2 error:(id)arg3;
- (id)inputtedStates;
- (id)inputtedStatesData;
- (id)originatingRequestIdentifier;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (void)setInputtedStatesData:(id)arg1;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
