
@interface BMDSLMerge : BMDSL {
    BMDSL * _a;
    BMDSL * _b;
}

@property (nonatomic, readonly) BMDSL *a;
@property (nonatomic, readonly) BMDSL *b;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)a;
- (id)b;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithA:(id)arg1 b:(id)arg2;
- (id)initWithA:(id)arg1 b:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (id)upstreams;

@end
