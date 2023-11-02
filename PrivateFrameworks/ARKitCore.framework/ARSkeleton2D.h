
@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {
    ABPK2DDetectionResult * _skeleton;
}

@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**jointLandmarks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)definition;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetectedSkeleton:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isJointTracked:(long long)arg1;
- (unsigned long long)jointCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)jointLandmarks;
- (void)landmarkForJointNamed:(id)arg1;

@end
