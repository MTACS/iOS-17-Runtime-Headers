
@interface HMIVideoAnalyzerEventMotion : HMIVideoAnalyzerEvent {
    float  _motionScore;
}

@property (readonly) float motionScore;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 motionScore:(float)arg3;
- (bool)isEqual:(id)arg1;
- (float)motionScore;
- (id)shortDescription;

@end
