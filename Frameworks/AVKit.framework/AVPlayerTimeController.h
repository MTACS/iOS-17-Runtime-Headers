
@interface AVPlayerTimeController : NSObject <AVTimeControlling> {
    AVValueTiming * _maxTiming;
    AVValueTiming * _minTiming;
    AVObservationController * _observationController;
    bool  _pendingSeek;
    AVPlayer * _player;
    NSObject<OS_dispatch_queue> * _seekQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekToTimeInternal;
    bool  _seekingInternal;
    AVValueTiming * _timing;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _toleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _toleranceBefore;
}

@property (nonatomic, readonly) bool canSeek;
@property (getter=isCompletelySeekable, readonly) bool completelySeekable;
@property (nonatomic, readonly) double contentDuration;
@property (nonatomic, readonly) double contentDurationWithinEndTimes;
@property (nonatomic, readonly) bool hasSeekableLiveStreamingContent;
@property (nonatomic, readonly) double maxTime;
@property (nonatomic, retain) AVValueTiming *maxTiming;
@property (nonatomic, readonly) double minTime;
@property (nonatomic, retain) AVValueTiming *minTiming;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isReadyToPlay, nonatomic, readonly) bool readyToPlay;
@property (nonatomic, readonly) double seekToTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } seekToTimeInternal;
@property (nonatomic, readonly) NSArray *seekableTimeRanges;
@property (getter=isSeeking, nonatomic, readonly) bool seeking;
@property (getter=isSeekingInternal, nonatomic) bool seekingInternal;
@property (nonatomic, retain) AVValueTiming *timing;

+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingReadyToPlay;
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_updateMinAndMaxTiming;
- (void)_updateTiming;
- (bool)canSeek;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })forwardPlaybackEndTime;
- (bool)hasSeekableLiveStreamingContent;
- (id)initForIFramesWithPlayerItem:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (bool)isCompletelySeekable;
- (bool)isReadyToPlay;
- (bool)isSeeking;
- (bool)isSeekingInternal;
- (double)maxTime;
- (id)maxTiming;
- (double)minTime;
- (id)minTiming;
- (id)observationController;
- (id)player;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })reversePlaybackEndTime;
- (double)seekToTime;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekToTimeInternal;
- (id)seekableTimeRanges;
- (void)setMaxTiming:(id)arg1;
- (void)setMinTiming:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSeekToTimeInternal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeekingInternal:(bool)arg1;
- (void)setTiming:(id)arg1;
- (void)startTimingObservation;
- (void)stopTimingObservation;
- (id)timing;

@end
