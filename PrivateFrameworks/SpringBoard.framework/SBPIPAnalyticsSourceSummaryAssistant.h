
@interface SBPIPAnalyticsSourceSummaryAssistant : SBPIPAnalyticsAssistant {
    bool  _PIPBecameActive;
    double  _possibleDuration;
    double  _possibleTimestamp;
}

- (id)_generateMutableAnalyticsPayload;
- (id)analyticsIdentifier;
- (id)initWithBundleIdentifier:(id)arg1 contentType:(long long)arg2 isAutoPIPEnabled:(bool)arg3 invalidationBlock:(id /* block */)arg4;
- (void)invalidate;
- (void)noteBecameActiveAtTime:(double)arg1;
- (void)notePIPBecamePossibleAtTime:(double)arg1;
- (void)notePIPBecameProhibitedAtTime:(double)arg1;

@end
