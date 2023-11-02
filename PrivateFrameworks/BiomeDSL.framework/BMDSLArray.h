
@interface BMDSLArray : BMDSL {
    NSString * _valueClassName;
    NSArray * _values;
}

@property (nonatomic, copy) NSString *valueClassName;
@property (nonatomic, readonly, copy) NSArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 values:(id)arg3 valueClassName:(id)arg4;
- (id)initWithValues:(id)arg1 valueClassName:(id)arg2;
- (void)setValueClassName:(id)arg1;
- (id)upstreams;
- (id)valueClassName;
- (id)values;

@end
