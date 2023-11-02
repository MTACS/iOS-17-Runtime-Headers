
@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController {
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
    }  _contentTimeRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _enqueuedBufferDimensions;
    bool  _paused;
    bool  _pictureInPictureAvailable;
    AVPictureInPictureController * _pictureInPictureController;
    <AVPictureInPictureSampleBufferPlaybackDelegate> * _playbackDelegate;
    AVSampleBufferDisplayLayerPlaybackDelegateAdapter * _playbackDelegateAdapter;
    AVPictureInPicturePlaybackState * _playbackState;
    AVObservationController * _sbdlObservationController;
    long long  _status;
    long long  _timeControlStatus;
    AVValueTiming * _timing;
}

@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } contentTimeRange;
@property (nonatomic) struct CGSize { double x1; double x2; } enqueuedBufferDimensions;
@property (getter=isPaused, nonatomic) bool paused;
@property (getter=isPictureInPictureAvailable, nonatomic) bool pictureInPictureAvailable;
@property (nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (nonatomic) <AVPictureInPictureSampleBufferPlaybackDelegate> *playbackDelegate;
@property (nonatomic, retain) AVSampleBufferDisplayLayerPlaybackDelegateAdapter *playbackDelegateAdapter;
@property (nonatomic, copy) AVPictureInPicturePlaybackState *playbackState;
@property (nonatomic, retain) AVObservationController *sbdlObservationController;
@property (nonatomic) long long status;
@property (nonatomic) long long timeControlStatus;

+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingTiming;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_currentSBDLTime;
- (double)_effectiveRate;
- (void)_startObservation;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (void)_updatePlaybackStateTiming;
- (void)_updateStatus;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })contentTimeRange;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })enqueuedBufferDimensions;
- (bool)hasLiveStreamingContent;
- (bool)hasSeekableLiveStreamingContent;
- (id)init;
- (void)invalidatePlaybackState;
- (bool)isPaused;
- (bool)isPictureInPictureAvailable;
- (bool)isPictureInPicturePossible;
- (bool)isPlaying;
- (id)maxTiming;
- (id)minTiming;
- (void)pauseForAllCoordinatedPlaybackParticipants:(bool)arg1;
- (id)pictureInPictureController;
- (id)playbackDelegate;
- (id)playbackDelegateAdapter;
- (id)playbackState;
- (double)rate;
- (id)sbdlObservationController;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)setContentTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setEnqueuedBufferDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setPictureInPictureAvailable:(bool)arg1;
- (void)setPictureInPictureController:(id)arg1;
- (void)setPictureInPictureInterrupted:(bool)arg1;
- (void)setPlaybackDelegate:(id)arg1;
- (void)setPlaybackDelegateAdapter:(id)arg1;
- (void)setPlaybackState:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setSbdlObservationController:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimeControlStatus:(long long)arg1;
- (long long)status;
- (long long)timeControlStatus;
- (id)timing;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;

@end
