
@interface BMDSLFilter : BMDSL {
    long long  _comparison;
    NSString * _keyPath;
    bool  _negation;
    BMDSL * _upstream;
    <NSSecureCoding> * _value;
}

@property (nonatomic, readonly) long long comparison;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) bool negation;
@property (nonatomic, readonly) BMDSL *upstream;
@property (nonatomic, readonly) <NSSecureCoding> *value;

+ (id)name;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (long long)comparison;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUpstream:(id)arg1 keyPath:(id)arg2 comparison:(long long)arg3 negation:(bool)arg4 value:(id)arg5;
- (id)initWithUpstream:(id)arg1 keyPath:(id)arg2 comparison:(long long)arg3 negation:(bool)arg4 value:(id)arg5 name:(id)arg6 version:(unsigned int)arg7;
- (id)initWithUpstream:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (id)keyPath;
- (bool)negation;
- (id)upstream;
- (id)upstreams;
- (id)value;

@end
