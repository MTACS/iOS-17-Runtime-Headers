
@interface TVRUISiriManager : NSObject <SiriActivationButtonEventListenerDelegate> {
    <_TVRUIEventDelegate> * _buttonActionsDelegate;
    SiriActivationAssertion * _siriAssertion;
}

@property (nonatomic) <_TVRUIEventDelegate> *buttonActionsDelegate;
@property (nonatomic, retain) SiriActivationAssertion *siriAssertion;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_activateSiriAssertion;
- (void)_donateTipsTrigger;
- (void)_registerForSiriButtonEvents;
- (void)_releaseSiriAssertion;
- (void)_unregisterForSiriButtonEvents;
- (id)buttonActionsDelegate;
- (void)buttonEventListenerDidReceiveButtonDownWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)buttonEventListenerDidReceiveButtonLongPressWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)buttonEventListenerDidReceiveButtonUpWithButtonIdentifier:(long long)arg1 atTimestamp:(double)arg2;
- (void)dealloc;
- (void)registerForSiriEvents;
- (void)setButtonActionsDelegate:(id)arg1;
- (void)setSiriAssertion:(id)arg1;
- (id)siriAssertion;
- (void)unregisterForSiriEvents;

@end
