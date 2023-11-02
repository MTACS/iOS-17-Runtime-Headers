
@interface SCDAFFeedbackService : NSObject <SiriCrossDeviceArbitrationFeedback.FeedbackServiceDelegate> {
    <SCDAFFeedbackServiceDelegate> * _delegate;
    _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl * _feedbackService;
    <_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> * _globals;
    NSString * _localDeviceAssistantIdentifier;
}

@property (nonatomic) <SCDAFFeedbackServiceDelegate> *delegate;
@property (nonatomic, retain) _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl *feedbackService;
@property (nonatomic, retain) <_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> *globals;
@property (nonatomic, copy) NSString *localDeviceAssistantIdentifier;

+ (id)sharedService;

- (void).cxx_destruct;
- (long long)_actionFromSCDAFFeedbackAction:(long long)arg1;
- (id)_init;
- (long long)_scdaFeedbackActionFrom:(long long)arg1;
- (id)delegate;
- (id)feedbackService;
- (id)globals;
- (void)handleAssistantDismissed;
- (void)handleNotificationAction:(long long)arg1;
- (void)handleNotificationSCDAFAction:(long long)arg1;
- (void)handleReceivedArbitrationParticipation:(id)arg1;
- (id)initWithServiceImpl:(id)arg1 globals:(id)arg2;
- (bool)isUserFeedbackFeatureEnabled;
- (id)localDeviceAssistantIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackService:(id)arg1;
- (void)setGlobals:(id)arg1;
- (void)setLocalDeviceAssistantIdentifier:(id)arg1;

@end
