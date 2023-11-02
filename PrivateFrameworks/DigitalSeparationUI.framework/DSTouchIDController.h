
@interface DSTouchIDController : DSOBWelcomeController <BiometricKitUIEnrollResultDelegate, DSController> {
    OBBoldTrayButton * _boldButton;
    UIBarButtonItem * _cancelLeftNavigationItem;
    <DSNavigationDelegate> * _delegate;
    bool  _enrollComplete;
    BiometricKitUIEnrollViewController * _enrollController;
    BiometricKitIdentity * _identity;
}

@property (nonatomic, retain) OBBoldTrayButton *boldButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) BiometricKitUIEnrollViewController *enrollController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isTouchIDEnrolled;

- (void).cxx_destruct;
- (id)_cancelLeftNavigationItem;
- (void)_userDidTapCancelButton:(id)arg1;
- (void)addNavigationItems;
- (void)beginEnrollment;
- (id)boldButton;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllIdentities;
- (void)deleteIdentity;
- (id)enrollController;
- (void)enrollResult:(int)arg1 bkIdentity:(id)arg2;
- (void)enrollTouchID;
- (bool)hasMultipleFingerprints;
- (id)init;
- (void)resetTouchID;
- (void)restartEnrollment;
- (void)setBoldButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnrollController:(id)arg1;
- (void)shouldShowWithCompletion:(id /* block */)arg1;
- (void)updateTouchIDPaneConfiguration;
- (void)viewDidLoad;

@end
