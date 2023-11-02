
@interface XREngineeringTypeArrayEncodingConvention : XREngineeringTypeEncodingConvention {
    NSArray * _fixedTypes;
    NSString * _remainderType;
}

@property (nonatomic, copy) NSArray *fixedTypes;
@property (nonatomic, copy) NSString *remainderType;

- (void).cxx_destruct;
- (id)fixedTypes;
- (id)remainderType;
- (void)setFixedTypes:(id)arg1;
- (void)setRemainderType:(id)arg1;

@end
