
@interface VUIPlaybackReporterVPAF : VUIPlaybackReporter {
    NSMapTable * _pendingPlayerProperties;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_audioFormatForPlayer:(id)arg1 session:(id)arg2;
- (id)_audioInfoForPlayer:(id)arg1;
- (unsigned long long)_capPlayHeadIfNeeded:(unsigned long long)arg1 forSession:(id)arg2;
- (id)_colorRangeForPlayer:(id)arg1;
- (id)_connectionInfo;
- (void)_createPlaybackDatePollingTimerForLiveStream:(id)arg1;
- (id)_createSessionForPlayer:(id)arg1;
- (id)_delegatedInfoForPlayer:(id)arg1;
- (id)_downloadInfoForPlayer:(id)arg1;
- (void)_endSession:(id)arg1;
- (void)_flushUnreportedEventsAfterDelay:(double)arg1;
- (id)_focusInfoForSession:(id)arg1;
- (void)_handleDisplaySizeChange:(id)arg1;
- (void)_handleIsPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_handleMediaControllerNotification:(id)arg1;
- (void)_handlePIPChange:(id)arg1;
- (void)_handleSkipIntro_iOS:(id)arg1;
- (void)_invalidatePlaybackDatePollingTimerForLiveStream:(id)arg1;
- (bool)_isDelegatedForPlayer:(id)arg1;
- (id)_metricsForPlayer:(id)arg1 session:(id)arg2;
- (id)_metricsForSession:(id)arg1;
- (id)_playHeadDescriptionForTimeInMS:(unsigned long long)arg1 playbackDate:(id)arg2;
- (void)_playerCurrentMediaItemWillSeek:(id)arg1;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (void)_reportSeekStopAtTimeInMS:(unsigned long long)arg1 playbackDate:(id)arg2 session:(id)arg3 tracker:(id)arg4 player:(id)arg5;
- (id)_screenInfo;
- (id)_sensitiveContentInfoForPlayer:(id)arg1;
- (void)_setSessionMetadataValue:(id)arg1 forKey:(id)arg2 player:(id)arg3;
- (id)_skipIntroActionForSession:(id)arg1 consume:(bool)arg2;
- (id)_subtitleInfoForPlayer:(id)arg1;
- (id)_trackerWithBaseEventDataForSession:(id)arg1;
- (id)_videoDisplayInfoForSession:(id)arg1;
- (void)dealloc;
- (bool)enforceSinglePlaybackSession;
- (void)flushUnreportedEvents;
- (id)init;

@end
