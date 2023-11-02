
@interface WFRemoteExecutionAskEachTimeRequest : WFRemoteExecutionRequest {
    NSString * _actionIdentifier;
    NSDictionary * _actionSerializedParameters;
    NSString * _associatedRunRequestIdentifier;
    NSArray * _parameterKeys;
    NSDictionary * _parameterKeysAndStates;
    NSMutableArray * _parameterKeysAndStatesData;
    NSDictionary * _possibleStatesByParameterKey;
    NSMutableArray * _possibleStatesByParameterKeyData;
}

@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) NSDictionary *actionSerializedParameters;
@property (nonatomic, readonly) NSString *associatedRunRequestIdentifier;
@property (nonatomic, readonly) NSArray *parameterKeys;
@property (nonatomic, readonly) NSDictionary *parameterKeysAndStates;
@property (nonatomic, retain) NSMutableArray *parameterKeysAndStatesData;
@property (nonatomic, readonly) NSDictionary *possibleStatesByParameterKey;
@property (nonatomic, retain) NSMutableArray *possibleStatesByParameterKeyData;

+ (long long)version;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionSerializedParameters;
- (id)associatedRunRequestIdentifier;
- (void)inflateParameterStatesWithAction:(id)arg1;
- (id)initWithAction:(id)arg1 parameters:(id)arg2 associatedRunRequestIdentifier:(id)arg3 possibleStatesByParameterKey:(id)arg4;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)parameterKeys;
- (id)parameterKeysAndStates;
- (id)parameterKeysAndStatesData;
- (id)possibleStatesByParameterKey;
- (id)possibleStatesByParameterKeyData;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (void)setParameterKeysAndStatesData:(id)arg1;
- (void)setPossibleStatesByParameterKeyData:(id)arg1;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
