
@interface _SBFKeyWindowStack : NSObject <BSDescriptionProviding> {
    SBFWindow * _expectedKeyWindow;
    NSMutableOrderedSet * _windowStack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_evaluateForNewKeyWindowWithReason:(id)arg1;
- (bool)_isWindowEligibleForKeyness:(id)arg1;
- (void)_keyWindowDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)expectedKeyWindow;
- (id)init;
- (void)noteWindowDeallocated:(id)arg1;
- (void)noteWindowHidden:(id)arg1;
- (void)noteWindowUnhidden:(id)arg1;
- (void)popKeyWindow:(id)arg1;
- (void)popKeyWindow:(id)arg1 reason:(id)arg2;
- (bool)pushKeyWindow:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
