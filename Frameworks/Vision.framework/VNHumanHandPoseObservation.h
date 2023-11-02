
@interface VNHumanHandPoseObservation : VNRecognizedPointsObservation

@property (readonly, copy) NSArray *availableJointNames;
@property (readonly, copy) NSArray *availableJointsGroupNames;
@property (readonly) long long chirality;

- (id)availableJointNames;
- (id)availableJointsGroupNames;
- (long long)chirality;
- (id)recognizedPointForJointName:(id)arg1 error:(id*)arg2;
- (id)recognizedPointsForJointsGroupName:(id)arg1 error:(id*)arg2;

@end
