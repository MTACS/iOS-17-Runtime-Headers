
@protocol SBAppInteractionEventSourceObserving <NSObject>

@optional

- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 applicationsBecameHidden:(NSSet *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 applicationsBecameVisible:(NSSet *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 keyboardFocusChangedToApplication:(NSString *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userDeletedApplications:(NSSet *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userDeletedWebBookmark:(SBBookmark *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userQuitApplicationInSwitcher:(NSString *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userRemovedSuggestions:(NSSet *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userTouchedApplication:(NSString *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userTouchedApplication:(NSString *)arg2 pid:(int)arg3 inContext:(unsigned int)arg4;

@end
