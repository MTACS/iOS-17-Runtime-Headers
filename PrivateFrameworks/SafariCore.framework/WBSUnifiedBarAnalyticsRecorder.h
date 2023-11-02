
@interface WBSUnifiedBarAnalyticsRecorder : NSObject {
    <WBSUnifiedBarAnalyticsRecorderDelegate> * _delegate;
}

@property (nonatomic) <WBSUnifiedBarAnalyticsRecorderDelegate> *delegate;

- (void).cxx_destruct;
- (void)_reportAnalytics;
- (id)delegate;
- (void)schedulePeriodicReport;
- (void)setDelegate:(id)arg1;

@end
