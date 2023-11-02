
@interface SBStatusBarContainer : NSObject <BSDescriptionProviding> {
    NSString * _reason;
    SBStatusBarReusePool * _reusePool;
    UIStatusBar * _statusBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) SBStatusBarReusePool *reusePool;
@property (nonatomic) UIStatusBar *statusBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)reason;
- (id)reusePool;
- (void)setReason:(id)arg1;
- (void)setReusePool:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
