
@interface ARSkeleton3D : ARSkeleton <NSSecureCoding> {
    ARCoreRESkeletonResult * _skeleton;
}

@property (nonatomic, readonly) ARCoreRESkeletonResult *coreRESkeleton;
@property (nonatomic, readonly) const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*jointLocalTransforms;
@property (nonatomic, readonly) const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*jointModelTransforms;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)coreRESkeleton;
- (id)definition;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreRESkeletonResult:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isJointTracked:(long long)arg1;
- (unsigned long long)jointCount;
- (const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)jointLocalTransforms;
- (const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)jointModelTransforms;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransformForJointName:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })modelTransformForJointName:(id)arg1;

@end
