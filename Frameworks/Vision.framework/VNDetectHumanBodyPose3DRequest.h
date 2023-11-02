
@interface VNDetectHumanBodyPose3DRequest : VNStatefulRequest {
    ABPKPoseEstimationPipeline * _bodyPosePipeline;
}

@property (readonly, copy) NSArray *results;

+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupsNamesRevision1;
+ (Class)configurationClass;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

- (void).cxx_destruct;
- (void)_initializeStateForRevision:(unsigned long long)arg1;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithFrameAnalysisSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)arg1;
- (id)supportedJointNamesAndReturnError:(id*)arg1;
- (id)supportedJointsGroupNamesAndReturnError:(id*)arg1;

@end
