
@interface CALNNullTimeToLeaveRefreshMonitor : NSObject <CALNTimeToLeaveRefreshMonitor> {
    <CALNTimeToLeaveRefreshMonitorDelegate> * _delegate;
}

@property (nonatomic) <CALNTimeToLeaveRefreshMonitorDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)removeRefreshTimerForEventExternalURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;

@end
