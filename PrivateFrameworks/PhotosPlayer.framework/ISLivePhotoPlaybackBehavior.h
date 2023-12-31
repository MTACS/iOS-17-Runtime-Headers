
@interface ISLivePhotoPlaybackBehavior : ISBehavior {
    long long  __currentPlaybackID;
    bool  __preparing;
    long long  __readyToPlayPlaybackID;
    bool  __videoReadyToPlay;
    struct { 
        bool respondsToDidFinish; 
        bool respondsToDidBeginPlaying; 
    }  _delegateFlags;
    bool  _hasBlurryTransition;
    bool  _immediatelyShowsPhotoWhenPlaybackEnds;
    bool  _isTransitioningToPhoto;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _keyTime;
    double  _photoTransitionDuration;
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
    }  _playbackTimeRange;
}

@property (setter=_setCurrentPlaybackID:, nonatomic) long long _currentPlaybackID;
@property (getter=_isPreparing, setter=_setPreparing:, nonatomic) bool _preparing;
@property (setter=_setReadyToPlayPlaybackID:, nonatomic) long long _readyToPlayPlaybackID;
@property (getter=_isVideoReadyToPlay, setter=_setVideoReadyToPlay:, nonatomic) bool _videoReadyToPlay;
@property (nonatomic) <ISLivePhotoPlaybackBehaviorDelegate> *delegate;
@property (nonatomic, readonly) bool hasBlurryTransition;
@property (nonatomic, readonly) bool immediatelyShowsPhotoWhenPlaybackEnds;
@property (nonatomic, readonly) bool isTransitioningToPhoto;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } keyTime;
@property (nonatomic, readonly) double photoTransitionDuration;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } playbackTimeRange;

- (long long)_currentPlaybackID;
- (void)_didFinishPreparing;
- (void)_handleDidFinish;
- (void)_handleDidFinishPreroll;
- (void)_handleDidSeekToBeginning;
- (bool)_isPreparing;
- (bool)_isVideoReadyToPlay;
- (void)_prepareVideoForPlaybackIfNeeded;
- (void)_prerollWithCompletionHandler:(id /* block */)arg1;
- (long long)_readyToPlayPlaybackID;
- (void)_setCurrentPlaybackID:(long long)arg1;
- (void)_setPreparing:(bool)arg1;
- (void)_setReadyToPlayPlaybackID:(long long)arg1;
- (void)_setVideoReadyToPlay:(bool)arg1;
- (void)_showVideoWithPlaybackID:(long long)arg1;
- (void)_startPlaybackWithPlaybackID:(long long)arg1;
- (void)_transitionToVideoWithPlaybackID:(long long)arg1;
- (void)activeDidChange;
- (long long)behaviorType;
- (bool)hasBlurryTransition;
- (bool)immediatelyShowsPhotoWhenPlaybackEnds;
- (id)initWithInitialLayoutInfo:(id)arg1 keyTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 playbackTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 photoTransitionDuration:(double)arg4 immediatelyShowsPhotoWhenPlaybackEnds:(bool)arg5 hasBlurryTransition:(bool)arg6;
- (bool)isTransitioningToPhoto;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })keyTime;
- (double)photoTransitionDuration;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackTimeRange;
- (void)setDelegate:(id)arg1;
- (void)startPlayback;
- (void)videoDidPlayToEnd;
- (void)videoWillPlayToEnd;

@end
