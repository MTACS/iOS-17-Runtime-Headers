
@interface VNRecognizedObjectObservation : VNDetectedObjectObservation {
    NSArray * _labels;
    VNPixelBufferObservation * _segmentationMask;
}

@property (nonatomic, readonly, copy) NSArray *labels;
@property (readonly) VNPixelBufferObservation *segmentationMask;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 labels:(id)arg4 segmentationMask:(id)arg5 groupId:(id)arg6;
- (id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 labels:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)labels;
- (id)segmentationMask;
- (id)vn_cloneObject;

@end
