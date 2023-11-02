
@protocol SASActivationInstrumentationSending <NSObject>

@required

- (id)initWithAnalyticsStream:(SiriAnalyticsClientMessageStream *)arg1;
- (void)instrumentActivationMessage:(SASActivationInstrumentationMessage *)arg1;
- (void)instrumentButtonInteractionType:(int)arg1 buttonIdentifier:(NSString *)arg2 activationEventIdentifier:(NSUUID *)arg3;
- (void)instrumentTurnActivatedWithTurnId:(NSUUID *)arg1 activationEventIdentifier:(NSUUID *)arg2;

@end
