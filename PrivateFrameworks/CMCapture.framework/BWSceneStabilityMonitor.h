
@interface BWSceneStabilityMonitor : NSObject {
    struct { 
        int *refRows; 
        int *refCols; 
        float qualityX; 
        float qualityY; 
        bool sceneStable; 
        float stabilityMetric; 
    }  _aeMatrixStorage;
    bool  _isAFCompletedOnLastFrame;
    bool  _isLastSceneStable;
    int  _lastAFStatus;
    struct { 
        float offsetX; 
        float offsetY; 
        float qualityX; 
        float qualityY; 
        int height; 
        int width; 
        int *refRowSum; 
        int *refColSum; 
        bool sceneStable; 
        float stabilityMetric; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } lastPTS; 
    }  _pixelSumStorage;
    bool  _processedSceneMotion;
    float  _sceneMotionOffsetX;
    float  _sceneMotionOffsetY;
    float  _stabilityMetric;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stableStartTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _unstableStartTime;
}

@property (getter=isAFCompleted, nonatomic, readonly) bool afCompleted;
@property (nonatomic, readonly) bool processedSceneMotion;
@property (nonatomic, readonly) float sceneMotionOffsetX;
@property (nonatomic, readonly) float sceneMotionOffsetY;
@property (nonatomic, readonly) float stabilityMetric;
@property (getter=isStable, nonatomic, readonly) bool stable;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stableStartTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } unstableStartTime;

+ (void)initialize;

- (void)calculateStabilityWithPixelBuffer:(struct __CVBuffer { }*)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadataDictionary:(id)arg3 forceSceneMotion:(bool)arg4;
- (void)dealloc;
- (id)init;
- (bool)isAFCompleted;
- (bool)isStable;
- (bool)processedSceneMotion;
- (void)reset;
- (float)sceneMotionOffsetX;
- (float)sceneMotionOffsetY;
- (float)stabilityMetric;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stableStartTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unstableStartTime;

@end
