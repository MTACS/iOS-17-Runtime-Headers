
@interface VNHumanBodyPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;

- (id)availableJointNames;
- (id)availableJointsGroupNames;
- (id)recognizedPointForJointName:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForJointsGroupName:(id)arg1 error:(id*)arg2;

@end
