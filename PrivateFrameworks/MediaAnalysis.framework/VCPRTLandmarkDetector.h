
@interface VCPRTLandmarkDetector : NSObject {
    struct LandmarkDetector { int x1; int x2; int x3; int x4; int x5; int x6; int x7; bool x8; float *x9; float *x10; float *x11; int *x12; struct ZPoint {} *x13; struct RegressionTree {} *x14; int (*x15)(); } * _internalLandmarkDetector;
    int  _numOfLandmarks;
}

- (void)calculateFaceRectFromPrevLM:(float*)arg1 result:(float*)arg2 numOfLandmarks:(int)arg3;
- (void)dealloc;
- (void)detectLandmark:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float*)arg5 prevResult:(float*)arg6 result:(float*)arg7;
- (id)initFromConfigFile:(id)arg1 numStage:(int)arg2 numLandmarks:(int)arg3 numTreePerStage:(int)arg4 depthOfTree:(int)arg5 numFeatures:(int)arg6;

@end
