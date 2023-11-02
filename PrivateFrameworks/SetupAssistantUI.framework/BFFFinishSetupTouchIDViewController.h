
@interface BFFFinishSetupTouchIDViewController : UIViewController <BiometricKitUIEnrollResultDelegate> {
    LAContext * _authContext;
    UIBarButtonItem * _cancelLeftNavigationItem;
    id /* block */  _completion;
    bool  _enrollComplete;
    BiometricKitUIEnrollViewController * _enrollController;
    BKIdentity * _identity;
    NSString * _passcode;
}

@property (nonatomic, retain) LAContext *authContext;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *passcode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cancelLeftNavigationItem;
- (void)_didCompleteMesaControllerWithResult:(unsigned long long)arg1;
- (void)_userDidTapCancelButton:(id)arg1;
- (id)authContext;
- (void)beginEnrollment;
- (id /* block */)completion;
- (void)dealloc;
- (void)deleteIdentity;
- (void)didBecomeActive:(id)arg1;
- (void)didResignActive:(id)arg1;
- (void)endEnrollment;
- (void)enrollResult:(int)arg1 bkIdentity:(id)arg2;
- (id)init;
- (void)loadView;
- (id)passcode;
- (void)resetLeftNavigationItem;
- (void)restartEnrollment;
- (void)setAuthContext:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPasscode:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
