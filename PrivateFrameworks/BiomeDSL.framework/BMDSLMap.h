
@interface BMDSLMap : BMDSL {
    <BMDSLTransform> * _transform;
    BMDSL * _upstream;
}

@property (nonatomic, readonly) <BMDSLTransform> *transform;
@property (nonatomic, readonly) BMDSL *upstream;

+ (id)name;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1 transform:(id)arg2;
- (id)initWithUpstream:(id)arg1 transform:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;
- (id)transform;
- (id)upstream;
- (id)upstreams;

@end
