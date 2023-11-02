
@interface VNHumanHandPoseDetector : VNHumanPoseDetector

+ (Class)recognizedPointsObservationClass;

- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:(id)arg1 error:(id*)arg2;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg1 error:(id*)arg2;

@end
