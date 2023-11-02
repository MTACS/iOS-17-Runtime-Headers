
@interface UIKeyboardArbiterManager : NSObject

@property (readonly) bool remoteKeyboardUndocked;

+ (id)arbiterClient;
+ (id)sharedArbiterManager;

- (void)forceKeyboardAway;
- (void)preserveKeyboardWithId:(id)arg1;
- (bool)remoteKeyboardUndocked;
- (void)restoreKeyboardWithId:(id)arg1;
- (void)userSelectedApp:(id)arg1 onCompletion:(id /* block */)arg2;
- (void)userSelectedProcessIdentifier:(int)arg1 withSceneIdentity:(id)arg2 onCompletion:(id /* block */)arg3;

@end
