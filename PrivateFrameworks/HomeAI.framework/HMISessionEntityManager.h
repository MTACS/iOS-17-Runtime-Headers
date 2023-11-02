
@interface HMISessionEntityManager : HMFObject <HMFLogging> {
    double  _faceVIPThresholdForTorsoAnnotation;
    HMIPersonTracker * _personTracker;
    NSMutableDictionary * _sessionEntities;
    NSMutableDictionary * _sessionUUIDToPreviousFaceprints;
    NSMutableDictionary * _sessionUUIDToPreviousTorsoprints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double faceVIPThresholdForTorsoAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *sessionEntities;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)updatePersonEventWithPersonEvent:(id)arg1 sessionEntityUUID:(id)arg2 predictedLinkedEntityUUIDs:(id)arg3 sessionEntityAssignment:(long long)arg4;

- (void).cxx_destruct;
- (id)assignSessionEntitiesToPersonEvents:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 homeUUID:(id)arg4;
- (id)assignSessionEntityToFaceRecognition:(id)arg1 torsoRecognition:(id)arg2 predictedLinkedEntityUUIDs:(id)arg3 availableSessionEntityUUIDs:(id)arg4 sessionEntityAssignment:(long long*)arg5;
- (id)clusterSessionEntityToFaceRecognition:(id)arg1 torsoRecognition:(id)arg2 predictedLinkedEntityUUIDs:(id)arg3 availableSessionEntityUUIDs:(id)arg4 sessionEntityAssignment:(long long*)arg5;
- (void)createSessionEntityWithUUID:(id)arg1 faceRecognition:(id)arg2 torsoRecognition:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 sessionEntityAssignment:(long long*)arg5;
- (double)faceVIPThresholdForTorsoAnnotation;
- (id)init;
- (id)sessionEntities;
- (void)submitTorsoprintsToModelManagerForHome:(id)arg1 withTorsoAnnotations:(id)arg2;
- (void)updatePreviousPrintsForSessionEntityUUID:(id)arg1 faceRecognition:(id)arg2 torsoRecognition:(id)arg3;
- (id)updateTorsoModelAndGetTorsoAnnotationsForHome:(id)arg1;

@end
