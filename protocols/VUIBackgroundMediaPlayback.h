
@protocol VUIBackgroundMediaPlayback

@required

- (bool)animateImageChange;
- (void)appendMediaInfos:(NSArray *)arg1;
- (bool)automaticPlaybackStart;
- (bool)clearPreviousImageBeforeLoading;
- (VUIMediaInfo *)currentMediaInfo;
- (unsigned long long)imageContentMode;
- (unsigned long long)imageSwappingAnimationType;
- (bool)isForeground;
- (bool)isPlaybackEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })legibleContentInsets;
- (unsigned long long)mediaInfoIndex;
- (NSArray *)mediaInfos;
- (NSObject *)notificationObject;
- (void)pause;
- (void)play;
- (double)playbackStartDelay;
- (TVPPlayer *)player;
- (void)removeMediaInfoAtIndex:(unsigned long long)arg1;
- (void)setAnimateImageChange:(bool)arg1;
- (void)setAutomaticPlaybackStart:(bool)arg1;
- (void)setClearPreviousImageBeforeLoading:(bool)arg1;
- (void)setControlsVisible:(bool)arg1;
- (void)setImageContentMode:(unsigned long long)arg1;
- (void)setImageSwappingAnimationType:(unsigned long long)arg1;
- (void)setLegibleContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMediaInfo:(VUIMediaInfo *)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)setMediaInfoIndex:(unsigned long long)arg1;
- (void)setMediaInfos:(NSArray *)arg1;
- (void)setMediaInfos:(NSArray *)arg1 animated:(bool)arg2;
- (void)setPlaybackEnabled:(bool)arg1;
- (void)setPlaybackStartDelay:(double)arg1;
- (void)setPlayer:(TVPPlayer *)arg1;
- (void)setShowsPlaybackControlsInForeground:(bool)arg1;
- (void)setShowsVideoControls:(bool)arg1;
- (void)setStopPlayerWhenExitingFullScreen:(bool)arg1;
- (void)setStopPlayerWhenViewDisappears:(bool)arg1;
- (void)setVideoGravity:(NSString *)arg1;
- (bool)shouldStopPlayerWhenExitingFullScreen;
- (bool)shouldStopPlayerWhenViewDisappears;
- (bool)showsPlaybackControlsInForeground;
- (unsigned long long)state;
- (void)stop;
- (void)transitionToForeground:(bool)arg1 animated:(bool)arg2;
- (void)transitionToForeground:(bool)arg1 withPlaybackControls:(bool)arg2 animated:(bool)arg3;
- (void)transitionToFullScreenAnimated:(bool)arg1;
- (NSString *)videoGravity;

@end
