
@interface BMDSLState : BMDSL {
    <BMDSLStateValue> * _combinedValue;
    NSString * _key;
    BMDSL * _upstream;
    <BMDSLStateValue> * _value;
}

@property (nonatomic, retain) <BMDSLStateValue> *combinedValue;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) BMDSL *upstream;
@property (nonatomic, readonly) <BMDSLStateValue> *value;

+ (id)name;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (id)combinedState;
- (id)combinedValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 upstream:(id)arg3 key:(id)arg4 value:(id)arg5;
- (id)initWithUpstream:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)key;
- (void)setCombinedValue:(id)arg1;
- (id)upstream;
- (id)upstreamCombinedState;
- (id)upstreams;
- (id)value;

@end
