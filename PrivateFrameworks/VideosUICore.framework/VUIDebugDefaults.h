
@interface VUIDebugDefaults : NSObject {
    bool  _debugRefreshEventLogEnabled;
    bool  _debugUIEnabled;
    bool  _enableDemoMode;
    bool  _gdprFirstTimeFlowEnabled;
    bool  _gdprWhatsNewFlowEnabled;
    bool  _metricsExpandedLoggingEnabled;
    bool  _metricsLogLocationAndImpressions;
    bool  _metricsLoggingEnabled;
    bool  _metricsPageRenderLoggingEnabled;
    bool  _pagePerformanceEnabled;
    bool  _playbackOverridesEnabled;
}

@property (nonatomic) bool debugRefreshEventLogEnabled;
@property (nonatomic) bool debugUIEnabled;
@property (nonatomic) bool enableDemoMode;
@property (nonatomic) bool gdprFirstTimeFlowEnabled;
@property (nonatomic) bool gdprWhatsNewFlowEnabled;
@property (nonatomic) bool metricsExpandedLoggingEnabled;
@property (nonatomic) bool metricsLogLocationAndImpressions;
@property (nonatomic) bool metricsLoggingEnabled;
@property (nonatomic) bool metricsPageRenderLoggingEnabled;
@property (nonatomic) bool pagePerformanceEnabled;
@property (nonatomic) bool playbackOverridesEnabled;

+ (id)sharedInstance;

- (bool)debugRefreshEventLogEnabled;
- (bool)debugUIEnabled;
- (bool)enableDemoMode;
- (bool)gdprFirstTimeFlowEnabled;
- (bool)gdprWhatsNewFlowEnabled;
- (id)init;
- (bool)metricsExpandedLoggingEnabled;
- (bool)metricsLogLocationAndImpressions;
- (bool)metricsLoggingEnabled;
- (bool)metricsPageRenderLoggingEnabled;
- (bool)pagePerformanceEnabled;
- (bool)playbackOverridesEnabled;
- (void)setDebugRefreshEventLogEnabled:(bool)arg1;
- (void)setDebugUIEnabled:(bool)arg1;
- (void)setEnableDemoMode:(bool)arg1;
- (void)setGdprFirstTimeFlowEnabled:(bool)arg1;
- (void)setGdprWhatsNewFlowEnabled:(bool)arg1;
- (void)setMetricsExpandedLoggingEnabled:(bool)arg1;
- (void)setMetricsLogLocationAndImpressions:(bool)arg1;
- (void)setMetricsLoggingEnabled:(bool)arg1;
- (void)setMetricsPageRenderLoggingEnabled:(bool)arg1;
- (void)setPagePerformanceEnabled:(bool)arg1;
- (void)setPlaybackOverridesEnabled:(bool)arg1;

@end
