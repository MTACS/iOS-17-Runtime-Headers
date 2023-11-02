
@interface _UIKeyboardArbiterClientSpringBoard : _UIKeyboardArbiterClientInputDestination

- (bool)allowedToShowKeyboard;
- (void)forceKeyboardAway;
- (id)init;
- (bool)isSpotlight:(id)arg1;
- (void)preserveKeyboardWithId:(id)arg1;
- (void)queue_keyboardIAVChanged:(double)arg1 onComplete:(id /* block */)arg2;
- (void)restoreKeyboardWithId:(id)arg1;
- (void)userSelectedApp:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)userSelectedProcessIdentifier:(int)arg1 withSceneIdentity:(id)arg2 onCompletion:(id /* block */)arg3;
- (void)willLock:(id)arg1;

@end
