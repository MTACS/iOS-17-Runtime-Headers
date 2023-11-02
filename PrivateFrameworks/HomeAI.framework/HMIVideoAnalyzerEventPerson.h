
@interface HMIVideoAnalyzerEventPerson : HMIVideoAnalyzerEvent {
    HMIVideoAnalyzerEventFace * _face;
    bool  _isBoundingBoxEstimated;
    HMIVideoAnalyzerEventTorso * _torso;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBoxForTracker;
@property (readonly) HMIVideoAnalyzerEventFace *face;
@property (getter=hasEstimatedBoundingBox, readonly) bool isBoundingBoxEstimated;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMIVideoAnalyzerEventTorso *torso;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allEvents;
- (id)attributeDescriptions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxForTracker;
- (id)confidence;
- (id)copyWithFaceEvent:(id)arg1 torso:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)face;
- (bool)hasEstimatedBoundingBox;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 face:(id)arg3;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 face:(id)arg3 torso:(id)arg4;
- (id)initWithFaceEvent:(id)arg1;
- (id)initWithFaceEvent:(id)arg1 torso:(id)arg2;
- (id)initWithTorsoEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sessionEntityUUID;
- (id)shortDescription;
- (id)torso;

@end
