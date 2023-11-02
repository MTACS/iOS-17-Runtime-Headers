
@interface HMIVideoAnalyzerEventFace : HMIVideoAnalyzerEvent {
    HMIFaceRecognition * _faceRecognition;
    NSNumber * _roll;
    HMITorsoAnnotation * _torsoAnnotation;
    NSNumber * _yaw;
}

@property (readonly) HMIFaceRecognition *faceRecognition;
@property (readonly) NSNumber *roll;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMITorsoAnnotation *torsoAnnotation;
@property (readonly) NSNumber *yaw;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceRecognition;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 faceRecognition:(id)arg3;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 yaw:(id)arg3 roll:(id)arg4 faceRecognition:(id)arg5 torsoAnnotation:(id)arg6 userInfo:(id)arg7;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 yaw:(id)arg3 roll:(id)arg4 faceRecognition:(id)arg5 userInfo:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)roll;
- (id)sessionEntityUUID;
- (id)shortDescription;
- (id)torsoAnnotation;
- (id)yaw;

@end
