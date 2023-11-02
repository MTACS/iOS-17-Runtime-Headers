
@interface BWIrisSequenceAdjuster : NSObject {
    int  _audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
    NSMutableArray * _discontinuities;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstIrisAudioOffset;
    bool  _generateIFrames;
    NSMutableArray * _interleavingQueues;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastVideoAdjustedTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieOriginalStartTime;
    unsigned int * _mediaTypes;
    BWMotionDataPreserver * _motionDataPreserver;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextAdjustedVideoTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previewFrameDuration;
    NSMutableArray * _timeSkews;
}

@property (nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } masterMovieOriginalStartTime;
@property (readonly) unsigned long long maximumNumberOfPreDiscontinuityFramesNeededToSatisfyAllDropFrameRecipes;
@property (readonly) bool readyToReleaseAudio;

+ (void)initialize;

- (void)adjustMovieInfoTimes:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjustedTimeForStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjustedTimeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })audioOffsetForOriginalStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { }*)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1;
- (bool)discontinuityExistsBetweenCurrentPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 previousPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forMediaTypeWithIndex:(long long)arg2;
- (void)enqueueVideoBufferTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 nativeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 isBracketFrame:(bool)arg3 isSISFrame:(bool)arg4;
- (id)initWithMediaTypes:(id)arg1 visMotionMetadataPreloadingEnabled:(bool)arg2 generateIFrames:(bool)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })masterMovieOriginalStartTime;
- (unsigned long long)maximumNumberOfPreDiscontinuityFramesNeededToSatisfyAllDropFrameRecipes;
- (bool)readyToReleaseAudio;
- (void)reset;
- (void)setAudioOffsetForOriginalStillImageTimeMaximumFrameLatency:(int)arg1;
- (void)setMasterMovieOriginalStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
