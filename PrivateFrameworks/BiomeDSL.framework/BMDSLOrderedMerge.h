
@interface BMDSLOrderedMerge : BMDSL {
    BMDSL * _a;
    BMDSL * _b;
    NSString * _key;
    NSString * _selectorName;
}

@property (nonatomic, readonly) BMDSL *a;
@property (nonatomic, readonly) BMDSL *b;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *selectorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)a;
- (id)b;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithA:(id)arg1 b:(id)arg2 key:(id)arg3 selector:(SEL)arg4;
- (id)initWithA:(id)arg1 b:(id)arg2 key:(id)arg3 selector:(SEL)arg4 name:(id)arg5 version:(unsigned int)arg6;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)selectorName;
- (id)upstreams;

@end
