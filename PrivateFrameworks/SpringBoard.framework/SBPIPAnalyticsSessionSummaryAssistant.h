
@interface SBPIPAnalyticsSessionSummaryAssistant : SBPIPAnalyticsAssistant {
    bool  _appStoppedSession;
    long long  _numberOfStashEvents;
    bool  _restoredFullScreen;
    bool  _startedAutomatically;
    double  _stashedDuration;
    double  _stashedTimestamp;
}

- (id)_generateMutableAnalyticsPayload;
- (id)analyticsIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(bool)arg3 invalidationBlock:(id /* block */)arg4;
- (void)invalidate;
- (void)noteAppStoppedSession:(bool)arg1;
- (void)noteBecameStashedAtTime:(double)arg1;
- (void)noteBecameUnstashedAtTime:(double)arg1;
- (void)noteRestoredFullScreen:(bool)arg1;
- (void)noteStartedAutomatically:(bool)arg1;

@end
