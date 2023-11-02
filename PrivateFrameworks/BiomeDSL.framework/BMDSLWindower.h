
@interface BMDSLWindower : BMDSL {
    BMDSLWindowAssigner * _assigner;
    NSString * _keyedPath;
    BMDSL * _upstream;
}

@property (nonatomic, readonly) BMDSLWindowAssigner *assigner;
@property (nonatomic, readonly, copy) NSString *keyedPath;
@property (nonatomic, readonly) BMDSL *upstream;

+ (id)name;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assigner;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1 keyedPath:(id)arg2 assigner:(id)arg3;
- (id)initWithUpstream:(id)arg1 keyedPath:(id)arg2 assigner:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;
- (id)keyedPath;
- (id)upstream;
- (id)upstreams;

@end
