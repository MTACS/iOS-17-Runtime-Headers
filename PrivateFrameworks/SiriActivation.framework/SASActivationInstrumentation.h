
@interface SASActivationInstrumentation : NSObject {
    NSUUID * _activationEventIdentifier;
    <SASActivationInstrumentationSending> * _instrumentationSender;
}

@property (retain) NSUUID *activationEventIdentifier;

- (void).cxx_destruct;
- (void)_instrumentButtonInteractionType:(int)arg1 buttonIdentifier:(id)arg2;
- (id)activationEventIdentifier;
- (id)buttonDownWithIdentifier:(id)arg1;
- (id)buttonTapWithIdentifier:(id)arg1 associateWithButtonDown:(bool)arg2;
- (id)buttonUpWithIdentifier:(id)arg1;
- (id)initWithSender:(id)arg1;
- (id)mostRecentAtivationEvenIdentifier;
- (void)setActivationEventIdentifier:(id)arg1;

@end
