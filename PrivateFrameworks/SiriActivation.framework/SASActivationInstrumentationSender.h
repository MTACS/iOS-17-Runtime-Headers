
@interface SASActivationInstrumentationSender : NSObject <SASActivationInstrumentationSending> {
    SiriAnalyticsClientMessageStream * _analyticsStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientEventWithActivationEventIdentifier:(id)arg1;
- (id)initWithAnalyticsStream:(id)arg1;
- (void)instrumentActivationMessage:(id)arg1;
- (void)instrumentButtonInteractionType:(int)arg1 buttonIdentifier:(id)arg2 activationEventIdentifier:(id)arg3;
- (void)instrumentTurnActivatedWithTurnId:(id)arg1 activationEventIdentifier:(id)arg2;

@end
