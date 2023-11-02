
@interface VUIPlaybackReporterUTS : VUIPlaybackReporter {
    VUIPlaybackUpNextConfig * _playbackUpNextConfig;
    WLKPlaybackReporter * _reporter;
}

@property (nonatomic, retain) VUIPlaybackUpNextConfig *playbackUpNextConfig;
@property (nonatomic, retain) WLKPlaybackReporter *reporter;

+ (void)_cachePlaybackResumeTime:(id)arg1 absoluteResumeTime:(id)arg2 featureRelativeResumeTime:(id)arg3;
+ (bool)_shouldCacheResumeTimeForMediaType:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_completionFudgeFactor;
- (id)_createSessionForPlayer:(id)arg1;
- (void)_endSession:(id)arg1;
- (bool)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)_reportForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (void)_reportLinearOrEBSForPlayer:(id)arg1 isLinear:(bool)arg2 playerState:(id)arg3 completionState:(unsigned long long)arg4 completionBlock:(id /* block */)arg5;
- (void)_reportSummary:(id)arg1 sessionID:(id)arg2 completion:(id /* block */)arg3;
- (void)_reportVODForPlayer:(id)arg1 playerState:(id)arg2 completionState:(unsigned long long)arg3 completionBlock:(id /* block */)arg4;
- (id)_wlkPlaybackRateForState:(id)arg1 player:(id)arg2;
- (long long)_wlkPlaybackStateForState:(id)arg1;
- (bool)enforceSinglePlaybackSession;
- (id)playbackUpNextConfig;
- (void)reportForPlayer:(id)arg1 completionState:(unsigned long long)arg2 completionBlock:(id /* block */)arg3;
- (id)reporter;
- (void)setPlaybackUpNextConfig:(id)arg1;
- (void)setReporter:(id)arg1;

@end
