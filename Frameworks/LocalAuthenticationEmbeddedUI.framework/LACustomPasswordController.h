
@interface LACustomPasswordController : UIViewController <LAAuthorizationViewControllerDelegate> {
    LAAuthorizationViewController * _authorizationController;
    id /* block */  _completion;
    <LACustomPasswordControllerDelegate> * _delegate;
    LAContext * _laContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LACustomPasswordControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationController:(id)arg1 didProvideAuthorizationRequirementWithReply:(id /* block */)arg2;
- (id)delegate;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarStyle;
- (void)setDelegate:(id)arg1;

@end
