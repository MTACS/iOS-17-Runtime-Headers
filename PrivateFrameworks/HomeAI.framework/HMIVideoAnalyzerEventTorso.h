
@interface HMIVideoAnalyzerEventTorso : HMIVideoAnalyzerEvent {
    NSNumber * _roll;
    HMITorsoRecognition * _torsoRecognition;
}

@property (readonly) NSNumber *roll;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMITorsoRecognition *torsoRecognition;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 roll:(id)arg3 torsoRecognition:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)roll;
- (id)sessionEntityUUID;
- (id)torsoRecognition;

@end
