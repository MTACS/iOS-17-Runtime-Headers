
@interface _PXVideoSessionPresentationState : NSObject <PXMutableVideoSession> {
    bool  _allowsExternalPlayback;
    NSString * _audioSessionCategory;
    unsigned long long  _audioSessionCategoryOptions;
    NSString * _audioSessionMode;
    unsigned long long  _audioSessionRouteSharingPolicy;
    long long  _desiredPlayState;
    bool  _loopingEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackStartTime;
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
    void * _presenter;
    bool  _preventsSleepDuringVideoPlayback;
    bool  _seekToBeginningAtEnd;
    bool  _shouldDisableAutomaticPixelBufferUpdates;
    bool  _shouldFadeVolumeChange;
    float  _volume;
}

@property (nonatomic) bool allowsExternalPlayback;
@property (nonatomic, readonly, copy) NSString *audioSessionCategory;
@property (nonatomic, readonly) unsigned long long audioSessionCategoryOptions;
@property (nonatomic, readonly) NSString *audioSessionMode;
@property (nonatomic, readonly) unsigned long long audioSessionRouteSharingPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long desiredPlayState;
@property (readonly) unsigned long long hash;
@property (getter=isLoopingEnabled, nonatomic) bool loopingEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackStartTime;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } playbackTimeRange;
@property (nonatomic) void*presenter;
@property (nonatomic) bool preventsSleepDuringVideoPlayback;
@property (nonatomic) bool seekToBeginningAtEnd;
@property (nonatomic) bool shouldDisableAutomaticPixelBufferUpdates;
@property (nonatomic, readonly) bool shouldFadeVolumeChange;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float volume;

- (void).cxx_destruct;
- (bool)allowsExternalPlayback;
- (id)audioSessionCategory;
- (unsigned long long)audioSessionCategoryOptions;
- (id)audioSessionMode;
- (unsigned long long)audioSessionRouteSharingPolicy;
- (long long)desiredPlayState;
- (bool)isLoopingEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackStartTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackTimeRange;
- (void*)presenter;
- (bool)preventsSleepDuringVideoPlayback;
- (bool)seekToBeginningAtEnd;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAudioSessionCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (void)setDesiredPlayState:(long long)arg1;
- (void)setLoopingEnabled:(bool)arg1;
- (void)setPlaybackStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPlaybackTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setPresenter:(void*)arg1;
- (void)setPreventsSleepDuringVideoPlayback:(bool)arg1;
- (void)setSeekToBeginningAtEnd:(bool)arg1;
- (void)setShouldDisableAutomaticPixelBufferUpdates:(bool)arg1;
- (void)setVolume:(float)arg1 withFade:(bool)arg2;
- (bool)shouldDisableAutomaticPixelBufferUpdates;
- (bool)shouldFadeVolumeChange;
- (float)volume;

@end
