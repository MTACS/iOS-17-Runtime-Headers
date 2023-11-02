
@interface HMIBackgroundEstimator : HMFObject <HMFLogging> {
    bool  _adjustBrightness;
    unsigned short * _assignment;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _backgroundChangeInterval;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _backgroundChangeResetInterval;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _backgroundChangeTimeStamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _backgroundExpireInterval;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _backgroundTimeStamp;
    HMIVideoAnalyzerConfiguration * _configuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _foregroundTimeStamp;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSMutableDictionary * _inactiveTracks;
    unsigned long long  _minSampleSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _modelSize;
    NSMutableArray * _motionDetections;
    NSMutableArray * _motionTimeStamps;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _motionValidInterval;
    unsigned long long  _numImages;
    unsigned long long  _numTracks;
    float * _runningMean;
    float * _runningStd;
    NSMutableDictionary * _tracks;
}

@property bool adjustBrightness;
@property unsigned short*assignment;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } backgroundChangeInterval;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } backgroundChangeResetInterval;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } backgroundChangeTimeStamp;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } backgroundExpireInterval;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } backgroundTimeStamp;
@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } foregroundTimeStamp;
@property (readonly) bool hasNewBackground;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } imageSize;
@property (readonly) NSMutableDictionary *inactiveTracks;
@property (readonly) unsigned long long minSampleSize;
@property struct CGSize { double x1; double x2; } modelSize;
@property (readonly) NSMutableArray *motionDetections;
@property (readonly) NSMutableArray *motionTimeStamps;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } motionValidInterval;
@property unsigned long long numImages;
@property unsigned long long numTracks;
@property float*runningMean;
@property float*runningStd;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *tracks;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_adjustBackgroundAtAttribute:(const char *)arg1 backgroundChanged:(bool)arg2 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)_blobsFromAssignment:(unsigned short*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_copyFromOutputBuffer:(const float*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)_copyFromPixelBuffer:(struct __CVBuffer { }*)arg1 toInputBuffer:(float*)arg2 translateCol:(int)arg3 translateRow:(int)arg4;
- (void)_correctRunningMeanBrightnessAtAttribute:(const char *)arg1;
- (void)_ensureInternalBuffersForPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)_expireMotionDetectionsAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_exportInternalStateForPixelBuffer:(struct __CVBuffer { }*)arg1 exportMode:(unsigned long long)arg2;
- (id)_foregroundBlobsFromBlobs:(id)arg1 backgroundChanged:(bool*)arg2;
- (void)_foregroundDifferencesFromPixelBuffer:(struct __CVBuffer { }*)arg1 differences:(float*)arg2;
- (void)_foregroundPixelsFromPixelBuffer:(struct __CVBuffer { }*)arg1 attribute:(char *)arg2 assignment:(unsigned short*)arg3 useChromaOnly:(bool)arg4;
- (float)_intersectionOverUnionFromBlob:(id)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 assignment:(unsigned short*)arg3;
- (bool)_invalidateBackgroundForPixelBuffer:(struct __CVBuffer { }*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)_predictForegroundFromPixelBuffer:(struct __CVBuffer { }*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_setAssignment:(unsigned short*)arg1 greaterThanType:(unsigned short)arg2 value:(unsigned short)arg3 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 scale:(float)arg5;
- (id)_stationaryTracks:(id)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)_updateBackgroundFromPixelBuffer:(struct __CVBuffer { }*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_updateCurrentTracks:(id)arg1 inactiveTracks:(id)arg2 blobs:(id)arg3 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)_updateRunningMean:(float*)arg1 runningSquaredMean:(float*)arg2 fromInputBuffer:(const float*)arg3 decay:(float)arg4;
- (void)_updateRunningStd:(float*)arg1 withAuxBuffer:(float*)arg2 runningMean:(const float*)arg3 runningSquaredMean:(const float*)arg4;
- (bool)adjustBrightness;
- (id)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)assignBackgroundEvents:(id)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)assignForegroundEvents:(id)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (unsigned short*)assignment;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })backgroundChangeInterval;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })backgroundChangeResetInterval;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })backgroundChangeTimeStamp;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })backgroundExpireInterval;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })backgroundTimeStamp;
- (id)configuration;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })foregroundTimeStamp;
- (void)handleMotionDetection:(id)arg1 inFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (bool)hasNewBackground;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)inactiveTracks;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)minSampleSize;
- (struct CGSize { double x1; double x2; })modelSize;
- (id)motionDetections;
- (id)motionTimeStamps;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })motionValidInterval;
- (unsigned long long)numImages;
- (unsigned long long)numTracks;
- (void)reset;
- (float*)runningMean;
- (float*)runningStd;
- (void)setAdjustBrightness:(bool)arg1;
- (void)setAssignment:(unsigned short*)arg1;
- (void)setBackgroundChangeTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBackgroundTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setForegroundTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumImages:(unsigned long long)arg1;
- (void)setNumTracks:(unsigned long long)arg1;
- (void)setRunningMean:(float*)arg1;
- (void)setRunningStd:(float*)arg1;
- (id)tracks;
- (id)visualizeBackgroundMean;
- (id)visualizeBackgroundStd;
- (id)visualizeForegroundAssignment;
- (id)visualizeForegroundDiffForPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
