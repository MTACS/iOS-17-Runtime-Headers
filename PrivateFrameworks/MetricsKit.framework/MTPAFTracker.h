
@interface MTPAFTracker : NSObject {
    MTPAFActivity * _currentActivity;
    NSArray * _playlistBindings;
    NSArray * _videoTrackers;
}

@property (nonatomic, retain) MTPAFActivity *currentActivity;
@property (nonatomic, retain) NSArray *playlistBindings;
@property (nonatomic, retain) NSArray *videoTrackers;

- (void).cxx_destruct;
- (id)currentActivity;
- (void)forEachVideoTracker:(id /* block */)arg1;
- (void)playStartedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStartedWithPlaybackRate:(float)arg1 atMilliseconds:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)playStartedWithPlaybackRate:(float)arg1 atSeconds:(double)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)playStoppedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)playStoppedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (id)playlistBindings;
- (void)seekStartedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStartedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStoppedAtMilliseconds:(unsigned long long)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)seekStoppedAtSeconds:(double)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4;
- (void)setCurrentActivity:(id)arg1;
- (void)setPlaylistBindings:(id)arg1;
- (void)setVideoTrackers:(id)arg1;
- (void)startActivity:(long long)arg1 playbackRate:(float)arg2 atMilliseconds:(unsigned long long)arg3 triggerType:(id)arg4 reason:(id)arg5 eventData:(id)arg6;
- (void)stopActivity:(long long)arg1 atMilliseconds:(unsigned long long)arg2 triggerType:(id)arg3 reason:(id)arg4 eventData:(id)arg5;
- (void)synchronizeAtMilliseconds:(unsigned long long)arg1;
- (void)synchronizeAtSeconds:(double)arg1;
- (void)trackPlaylist:(id)arg1 using:(id)arg2;
- (void)updateEventData:(id)arg1;
- (id)videoTrackers;

@end
