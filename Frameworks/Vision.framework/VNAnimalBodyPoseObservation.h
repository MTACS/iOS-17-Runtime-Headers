
@interface VNAnimalBodyPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointGroupNames;
@property (readonly, copy) NSArray *availableJointNames;

- (id)availableJointGroupNames;
- (id)availableJointNames;
- (id)recognizedPointForJointName:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForJointsGroupName:(id)arg1 error:(id*)arg2;

@end
