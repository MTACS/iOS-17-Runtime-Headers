
@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {
    bool  _menuButtonDown;
    bool  _primed;
}

- (bool)bioUnlock;
- (id)description;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)screenOff;
- (void)significantUserInteractionOccurred;
- (id)succinctDescriptionBuilder;

@end
