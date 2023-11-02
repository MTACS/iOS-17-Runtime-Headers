
@interface VCPVideoInterpolator : VCPVideoAnalyzer {
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
    bool  _cancelled;
    NSString * _combinedFilePath;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endAdjustedPTS;
    NSString * _filePath;
    NSArray * _frameInsertionLists;
    FRCFrameInterpolator * _frameInterpolator;
    NSMutableArray * _intraFrameList;
    AVAssetReaderTrackOutput * _livePhotoInfoOutput;
    AVAssetTrack * _originalTrack;
    FRCFrame * _previousFrame;
    struct opaqueCMSampleBuffer { } * _previousMetadata;
    bool  _processAborted;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startAdjustedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillPTS;
}

@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } adjustedTimeRange;
@property (nonatomic) bool cancelled;
@property (readonly) bool processAborted;

+ (bool)allowMultipleFormats;
+ (long long)getFRCQualityMode;
+ (bool)isEnabled;
+ (void)sendPreGatedAnalytics;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })adjustedTimeRange;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)appendOutput:(id)arg1 toTrack:(id)arg2 startTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 endTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 offset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg6;
- (bool)cancelled;
- (int)combineVideoSegments;
- (void)dealloc;
- (id)deserializeMetadata:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)findIntraFrameList:(id)arg1;
- (id)findLivePhotoInfoOutput:(id)arg1;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct CGSize { double x1; double x2; })getFrameSize:(id)arg1;
- (id)initWithTimestamps:(id)arg1 andIdentifier:(id)arg2 andTrack:(id)arg3;
- (bool)isIntraFrame:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)processAborted;
- (id)results;
- (void)setCancelled:(bool)arg1;
- (int)setupLivePhotoInfoOutput:(id)arg1;
- (int)updateLivePhotoInfoSample:(struct opaqueCMSampleBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withMetadata:(id)arg3 isInterpolated:(bool)arg4 updatedSample:(struct opaqueCMSampleBuffer {}**)arg5;

@end
