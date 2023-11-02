
@interface SBAppInteractionEventSourceManager : NSObject <SBAppInteractionEventSourceObserving, SBAppInteractionEventSourceProviding> {
    NSHashTable * _observers;
    NSMapTable * _windowScenesToEventSources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMapTable *windowScenesToEventSources;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)eventSource:(id)arg1 applicationsBecameHidden:(id)arg2;
- (void)eventSource:(id)arg1 applicationsBecameVisible:(id)arg2;
- (void)eventSource:(id)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(id)arg3 activatingElement:(id)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id)arg1 keyboardFocusChangedToApplication:(id)arg2;
- (void)eventSource:(id)arg1 userDeletedApplications:(id)arg2;
- (void)eventSource:(id)arg1 userDeletedWebBookmark:(id)arg2;
- (void)eventSource:(id)arg1 userQuitApplicationInSwitcher:(id)arg2;
- (void)eventSource:(id)arg1 userRemovedSuggestions:(id)arg2;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2 pid:(int)arg3 inContext:(unsigned int)arg4;
- (id)eventSourceForWindowScene:(id)arg1;
- (id)init;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)windowSceneDidConnect:(id)arg1;
- (void)windowSceneDidDisconnect:(id)arg1;
- (id)windowScenesToEventSources;

@end
