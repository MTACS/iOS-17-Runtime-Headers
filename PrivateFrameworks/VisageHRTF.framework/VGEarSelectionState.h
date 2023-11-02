
@interface VGEarSelectionState : NSObject {
    bool  _completed;
    int  _detectionError;
    bool  _failed;
    NSDictionary * _leftEarRollAngleCapturedPoses;
    NSDictionary * _leftEarYawAngleCapturedPoses;
    struct VGEarPose { 
        int side; 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } pose; 
    }  _pose;
    float  _progress;
    NSDictionary * _rightEarRollAngleCapturedPoses;
    NSDictionary * _rightEarYawAngleCapturedPoses;
}

@property (nonatomic) bool completed;
@property (nonatomic) int detectionError;
@property (nonatomic) bool failed;
@property (nonatomic, readonly) NSDictionary *leftEarRollAngleCaptured;
@property (nonatomic, retain) NSDictionary *leftEarRollAngleCapturedPoses;
@property (nonatomic, readonly) NSDictionary *leftEarYawAngleCaptured;
@property (nonatomic, retain) NSDictionary *leftEarYawAngleCapturedPoses;
@property (nonatomic) struct VGEarPose { int x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; } pose; /* unknown property attribute:  std::allocator<float>>=^f}}} */
@property (nonatomic) float progress;
@property (nonatomic, readonly) NSDictionary *rightEarRollAngleCaptured;
@property (nonatomic, retain) NSDictionary *rightEarRollAngleCapturedPoses;
@property (nonatomic, readonly) NSDictionary *rightEarYawAngleCaptured;
@property (nonatomic, retain) NSDictionary *rightEarYawAngleCapturedPoses;

+ (id)capturedStatesFromCapturedPoses:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completed;
- (id)description;
- (int)detectionError;
- (bool)failed;
- (id)leftEarRollAngleCaptured;
- (id)leftEarRollAngleCapturedPoses;
- (id)leftEarYawAngleCaptured;
- (id)leftEarYawAngleCapturedPoses;
- (struct VGEarPose { int x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; })pose;
- (float)progress;
- (id)rightEarRollAngleCaptured;
- (id)rightEarRollAngleCapturedPoses;
- (id)rightEarYawAngleCaptured;
- (id)rightEarYawAngleCapturedPoses;
- (void)setCompleted:(bool)arg1;
- (void)setDetectionError:(int)arg1;
- (void)setFailed:(bool)arg1;
- (void)setLeftEarRollAngleCapturedPoses:(id)arg1;
- (void)setLeftEarYawAngleCapturedPoses:(id)arg1;
- (void)setPose:(struct VGEarPose { int x1; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; })arg1;
- (void)setProgress:(float)arg1;
- (void)setRightEarRollAngleCapturedPoses:(id)arg1;
- (void)setRightEarYawAngleCapturedPoses:(id)arg1;

@end
