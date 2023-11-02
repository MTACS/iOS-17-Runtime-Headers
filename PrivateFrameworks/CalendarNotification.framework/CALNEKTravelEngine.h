
@interface CALNEKTravelEngine : NSObject <CADModule, CALNTravelEngine> {
    bool  _active;
    <CALNTravelEngineDelegate> * _delegate;
    EKTravelEngine * _travelEngine;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CALNTravelEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EKTravelEngine *travelEngine;

- (void).cxx_destruct;
- (id /* block */)_adviceReceivedBlock;
- (id /* block */)_authorizationChangedBlock;
- (id /* block */)_eventSignficantlyChangedBlock;
- (void)activate;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(id)arg1;
- (void)deactivate;
- (id)delegate;
- (void)didRegisterForAlarms;
- (id)initWithTravelEngine:(id)arg1;
- (bool)isActive;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)requestHypothesisRefreshAtDate:(id)arg1 forEventWithExternalURL:(id)arg2;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)arg1;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)travelEngine;

@end
