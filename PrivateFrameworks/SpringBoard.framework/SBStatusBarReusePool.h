
@interface SBStatusBarReusePool : NSObject <BSDescriptionProviding> {
    id /* block */  _newStatusBarConfigurationHandler;
    NSMutableArray * _recycledStatusBars;
    UIWindow * _recycledStatusBarsContainerWindow;
    NSHashTable * _statusBars;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ newStatusBarConfigurationHandler;
@property (readonly) Class superclass;
@property (nonatomic) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_removeStatusBarContainer:(id)arg1;
- (void)_resetStatusBar:(id)arg1 clearOverrides:(bool)arg2;
- (unsigned long long)_statusBarInstanceLimit;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateStatusBars:(id /* block */)arg1;
- (id)getReusableStatusBarWithReason:(id)arg1;
- (id)getReusableStatusBarWithReason:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithWindowScene:(id)arg1;
- (id /* block */)newStatusBarConfigurationHandler;
- (void)recycleStatusBar:(id)arg1;
- (void)setNewStatusBarConfigurationHandler:(id /* block */)arg1;
- (void)setWindowScene:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)windowScene;

@end
