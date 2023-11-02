
@interface ARBodyAnchor : ARAnchor <ARTrackable> {
    double  _estimatedScaleFactor;
    ARBody2D * _referenceBody;
    ARSkeleton3D * _skeleton;
    ARCoreRESkeletonResult * _skeletonData;
    bool  _tracked;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double estimatedScaleFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTracked;
@property (nonatomic, readonly) ARBody2D *referenceBody;
@property (nonatomic, readonly) ARSkeleton3D *skeleton;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithTrackedState:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)estimatedScaleFactor;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 tracked:(bool)arg3 skeletonData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToARBodyAnchor:(id)arg1;
- (bool)isTracked;
- (id)referenceBody;
- (id)skeleton;

@end
