
@interface SBAlwaysOnTelemetryMetrics : NSObject {
    _SBMachContinuousStopwatch * _activeStopWatch;
    NSNumber * _averageAPL;
    NSNumber * _averageAPLDimming;
    unsigned long long  _discardedFramesUpTo2mStale;
    unsigned long long  _discardedFramesUpTo3mStale;
    unsigned long long  _discardedFramesUpTo4mStale;
    unsigned long long  _discardedFramesUpTo5mStale;
    unsigned long long  _discardedFramesUpTo6mStale;
    unsigned long long  _invalidatedFramesUpTo2mStale;
    unsigned long long  _invalidatedFramesUpTo3mStale;
    unsigned long long  _invalidatedFramesUpTo4mStale;
    unsigned long long  _invalidatedFramesUpTo5mStale;
    unsigned long long  _invalidatedFramesUpTo6mStale;
    NSNumber * _maximumAPL;
    NSNumber * _maximumAPLDimming;
    NSNumber * _minimumAPL;
    NSNumber * _minimumAPLDimming;
    NSMutableSet * _presentationSources;
    unsigned long long  _renderedFrameCount;
    unsigned long long  _renderedFrames1to2Min;
    unsigned long long  _renderedFrames2to3Min;
    unsigned long long  _renderedFrames3to4Min;
    unsigned long long  _renderedFrames4to5Min;
    unsigned long long  _renderedFrames5to6Min;
    unsigned long long  _renderedFramesLessThan1Min;
    unsigned long long  _renderedFramesMoreThan6Min;
    unsigned long long  _renderedPartialMinuteCount;
    NSMutableDictionary * _stateChangeCounts;
    NSMutableDictionary * _stopWatches;
}

- (void).cxx_destruct;
- (void)accumulateDiscardHistogram:(id)arg1;
- (void)accumulateInvalidationHistogram:(id)arg1;
- (void)accumulatePresentationSources:(id)arg1;
- (void)accumulateRenderHistogram:(id)arg1;
- (id)dataForAnalyticsEvent:(id)arg1;
- (id)dataForPowerlogEvent:(id)arg1;
- (id)init;
- (void)setBacklightState:(long long)arg1;

@end
