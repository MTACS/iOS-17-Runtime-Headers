
@interface SBMesaUnlockTrigger : NSObject {
    bool  _authenticated;
    <SBMesaUnlockTriggerDelegate> * _delegate;
}

@property (nonatomic) bool authenticated;
@property (nonatomic) <SBMesaUnlockTriggerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)authenticated;
- (bool)bioUnlock;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)fingerOff;
- (void)fingerOn;
- (void)lockButtonDown;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)screenOff;
- (void)screenOn;
- (void)setAuthenticated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)significantUserInteractionOccurred;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
