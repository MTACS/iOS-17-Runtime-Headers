
@interface _SBTodayViewControllerIconImageViewControllerKeepStaticAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    bool  _invalidated;
    NSString * _reason;
    SBTodayViewController * _todayViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBTodayViewController *todayViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithTodayViewController:(id)arg1 reason:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (id)reason;
- (void)setInvalidated:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)todayViewController;

@end
