
@interface BMDSLCollect : BMDSL {
    BMDSL * _upstream;
}

@property (nonatomic, readonly) BMDSL *upstream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1;
- (id)initWithUpstream:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (id)upstream;
- (id)upstreams;

@end
