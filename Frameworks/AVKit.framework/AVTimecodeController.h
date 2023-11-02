
@interface AVTimecodeController : NSObject {
    long long  _frameCount;
    long long  _maxFrameNumber;
    struct CVSMPTETime { 
        short subframes; 
        short subframeDivisor; 
        unsigned int counter; 
        unsigned int type; 
        unsigned int flags; 
        short hours; 
        short minutes; 
        short seconds; 
        short frames; 
    }  _maxTimecode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _observationInterval;
    id  _timeObserver;
    AVAssetTrack * _timecodeTrack;
    NSMutableArray * _timecodes;
    AVAssetTrack * _videoTrack;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } observationInterval;
@property (nonatomic, retain) AVAssetTrack *timecodeTrack;

- (void).cxx_destruct;
- (void)cacheTimecodeDescriptionForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (long long)calculateFrameNumberAtCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (long long)calculateFrameNumberAtTimeInterval:(double)arg1;
- (long long)calculateFrameNumberAtTimecode:(id)arg1;
- (void)calculateMaxFrameAndTimecode;
- (id)calculateTimecodeAtFrame:(long long)arg1;
- (id)initWithTimecodeTrack:(id)arg1 videoTrack:(id)arg2;
- (id)maxFrameCountString;
- (id)maxTimecodeString;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })observationInterval;
- (long long)offsetFor:(id)arg1 fromTimecode:(id)arg2;
- (bool)readTimecodes;
- (void)setTimecodeTrack:(id)arg1;
- (double)timeIntervalForFrameNumber:(long long)arg1;
- (bool)timecodeAvailable;
- (id)timecodeForFrameNumber32UsingFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 timecodeStartFrame:(long long)arg2;
- (struct CVSMPTETime { short x1; short x2; unsigned int x3; unsigned int x4; unsigned int x5; short x6; short x7; short x8; short x9; })timecodeForFrameNumber64UsingCachedDescription:(long long)arg1;
- (struct CVSMPTETime { short x1; short x2; unsigned int x3; unsigned int x4; unsigned int x5; short x6; short x7; short x8; short x9; })timecodeForOffset:(long long)arg1 from:(long long)arg2 timecode:(id)arg3;
- (id)timecodeTrack;
- (bool)validateCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
