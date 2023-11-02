
@interface SBStatusBarPartVisibilityAssertion : BSSimpleAssertion <BSDescriptionProviding> {
    NSMutableSet * _hiddenParts;
    UIStatusBar * _statusBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setStatusBarPartWithIdentifier:(id)arg1 hidden:(bool)arg2 animatedWithDuration:(double)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 forReason:(id)arg3;
- (bool)isHidingStatusBarPartWithIdentifier:(id)arg1;
- (void)setStatusBarPartWithIdentifier:(id)arg1 hidden:(bool)arg2 animated:(bool)arg3;
- (void)setStatusBarPartWithIdentifier:(id)arg1 hidden:(bool)arg2 animatedWithDuration:(double)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
