
@interface SBWindowLevelAssertionManager : NSObject <BSDescriptionProviding> {
    <SBWindowLevelAssertionManagerDelegate> * _delegate;
    NSMapTable * _windowLevelAssertionsPerScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBWindowLevelAssertionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMapTable *windowLevelAssertionsPerScene;

- (void).cxx_destruct;
- (void)_notifyDelegateAssertionsDidUpdateForWindowScene:(id)arg1;
- (id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 windowScene:(id)arg3 reason:(id)arg4;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)highestPriorityWindowLevelAssertionForWindowScene:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)windowLevelAssertionsPerScene;

@end
