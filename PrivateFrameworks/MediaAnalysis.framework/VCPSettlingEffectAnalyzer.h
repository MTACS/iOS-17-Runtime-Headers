
@interface VCPSettlingEffectAnalyzer : VCPVideoAnalyzer {
    float  _FRCConfidence;
    bool  _FRCGatingFailure;
    long long  _FRCRecommendation;
    NSDictionary * _FRCStatistics;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _adjustedTimeRange;
    unsigned long long  _anchorIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _anchorPTS;
    AVAssetReader * _assetReader;
    VCPMovieAssetWriter * _assetWriter;
    VCPPoolBasedPixelBufferCreator * _bufferCreator;
    NSMutableArray * _burstDropsList;
    bool  _cancelled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cleanApertureRect;
    CIContext * _context;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _destSize;
    NSString * _filePath;
    FRCFrameDropDetector * _frameDropDetector;
    unsigned long long  _frameIdx;
    FRCFrameInterpolator * _frameInterpolator;
    NSArray * _framePTSList;
    AVAssetReaderTrackOutput * _livePhotoInfoOutput;
    bool  _metadataIntegrityFailure;
    AVAssetTrack * _originalTrack;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _outputFrameDuration;
    NSDictionary * _pixelBasedHomogrphies;
    FRCFrame * _previousFrame;
    struct opaqueCMSampleBuffer { } * _previousMetadata;
    bool  _processAborted;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _settlingStartPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillPTS;
    bool  _stillTransitionGatingFailure;
    unsigned long long  _timingCurveIdx;
    NSArray * _timingCurveList;
    bool  _userInitiatedMode;
    bool  _videoQualityGatingFailure;
}

@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } adjustedTimeRange;
@property (nonatomic) bool cancelled;
@property (readonly) bool processAborted;

+ (bool)disableBurstFrameDropGating;
+ (bool)disableMetadataIntegrityCheck;
+ (bool)disableStillTransitionGating;
+ (bool)disableVideoQualityGating;
+ (long long)getFRCQualityMode;
+ (id)getFramePTSList:(id)arg1 before:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (id)getRetimingCurve;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })getSettlingEffectTimeRange:(id)arg1 withOptions:(id)arg2;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })adjustedTimeRange;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (bool)cancelled;
- (int)createLivePhotoInfoSample:(struct opaqueCMSampleBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 isInterpolated:(bool)arg3 updatedSample:(struct opaqueCMSampleBuffer {}**)arg4;
- (void)dealloc;
- (id)findLivePhotoInfoOutput:(id)arg1;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 withStillImageBuffer:(struct __CVBuffer { }*)arg2;
- (struct CGSize { double x1; double x2; })getCleanApertureFrameSize:(id)arg1;
- (struct CGSize { double x1; double x2; })getFrameSize:(id)arg1;
- (id)getPixelBasedHomographies:(id)arg1 withCleanApertureSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithTimestamps:(id)arg1 andTrack:(id)arg2 andRecipe:(id)arg3 withOptions:(id)arg4;
- (bool)processAborted;
- (struct __CVBuffer { }*)resamplePixelBuffer:(struct __CVBuffer { }*)arg1 cleanApertureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 homographyArray:(id)arg4;
- (id)results;
- (struct __CVBuffer { }*)scaleStillImage:(struct __CVBuffer { }*)arg1;
- (void)setCancelled:(bool)arg1;
- (int)setupLivePhotoInfoOutput:(id)arg1;

@end
