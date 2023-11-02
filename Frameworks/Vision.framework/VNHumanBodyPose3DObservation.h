
@interface VNHumanBodyPose3DObservation : VNRecognizedPoints3DObservation {
    NSArray * _availableJointsGroupNames;
}

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;
@property (nonatomic, readonly) float bodyHeight;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraOriginMatrix;
@property (readonly) long long heightEstimation;

- (void).cxx_destruct;
- (id)availableJointNames;
- (id)availableJointsGroupNames;
- (float)bodyHeight;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraOriginMatrix;
- (id)debugQuickLookObject;
- (bool)getCameraRelativePosition:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 forJointName:(id)arg2 error:(id*)arg3;
- (long long)heightEstimation;
- (id)parentJointNameForJointName:(id)arg1;
- (id)pointInImageForJointName:(id)arg1 error:(id*)arg2;
- (id)recognizedPointForJointName:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForJointsGroupName:(id)arg1 error:(id*)arg2;

@end
