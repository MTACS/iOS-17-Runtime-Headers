
@interface BMDSLTableAggregator : BMDSLAggregator {
    NSArray * _classKeyPaths;
    NSArray * _classNames;
    NSArray * _transforms;
}

@property (nonatomic, readonly, copy) NSArray *classKeyPaths;
@property (nonatomic, readonly, copy) NSArray *classNames;
@property (nonatomic, retain) NSArray *transforms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsAggregator;
- (id)classKeyPaths;
- (id)classNames;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTableTransforms:(id)arg1 classNames:(id)arg2;
- (id)initWithTableTransforms:(id)arg1 classNames:(id)arg2 classKeyPaths:(id)arg3;
- (id)initWithTableTransforms:(id)arg1 classNames:(id)arg2 classKeyPaths:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;
- (void)setTransforms:(id)arg1;
- (id)transforms;

@end
