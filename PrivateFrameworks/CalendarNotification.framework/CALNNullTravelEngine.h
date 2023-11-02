
@interface CALNNullTravelEngine : NSObject <CALNTravelEngine> {
    <CALNTravelEngineDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CALNTravelEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
- (id)delegate;
- (void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
