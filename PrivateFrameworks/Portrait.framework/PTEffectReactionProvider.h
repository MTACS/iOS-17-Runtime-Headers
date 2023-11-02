
@interface PTEffectReactionProvider : NSObject <PTHandGestureDelegate> {
    float  _gestureDetectionFPS;
    PTHandGestureDetector * _gestureDetector;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastFrameTimeStamp;
    NSArray * _latestGestures;
    NSArray * _latestReactions;
    NSMutableDictionary * _personIdentifierToPerson;
}

@property (nonatomic) float gestureDetectionFPS;
@property (retain) NSArray *latestGestures;
@property (retain) NSArray *latestReactions;

- (void).cxx_destruct;
- (float)gestureDetectionFPS;
- (void)gesturesAvailable:(id)arg1 forTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithFrameSize:(struct CGSize { double x1; double x2; })arg1 sharedResources:(id)arg2 asyncInitQueue:(id)arg3 externalHandDetectionsEnabled:(bool)arg4;
- (id)latestGestures;
- (id)latestReactions;
- (bool)runGestureDetectionForTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setGestureDetectionFPS:(float)arg1;
- (void)setLatestGestures:(id)arg1;
- (void)setLatestReactions:(id)arg1;
- (void)updateWithFrame:(struct __CVBuffer { }*)arg1 withTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withRotationDegrees:(int)arg3 withDetectedHands:(id)arg4 withDetectedFaces:(id)arg5;

@end
