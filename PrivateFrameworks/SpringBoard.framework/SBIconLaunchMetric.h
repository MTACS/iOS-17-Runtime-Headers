
@interface SBIconLaunchMetric : SBAnalyticsStateMachineEventHandler {
    NSString * _iconLocationValue;
    bool  _isFolder;
    unsigned long long  _layoutLocation;
    PETGoalConversionEventTracker * _trackerV1;
    PETGoalConversionEventTracker * _trackerV2;
}

- (void).cxx_destruct;
- (void)_processAndReportLaunchedEventPayload:(id)arg1;
- (void)_processAndReportTappedEventPayload:(id)arg1;
- (id)init;

@end
