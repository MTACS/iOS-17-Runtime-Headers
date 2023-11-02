
@interface VideosUI.SportsKitScoreboardManager : _TtCs12_SwiftObject {
    void $__lazy_storage_$_miniScorecardClockComponentsFormatter;
    void $__lazy_storage_$_runningClockComponentsFormatter;
    void $__lazy_storage_$_timer;
    void _cachedScores;
    void _demand;
    void _demandCanceller;
    void _timer;
    void fetchTask;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void listeners;
    void logger;
    void task;
}

- (void)handleApplicationNotification:(id)arg1;

@end
