
@interface PKAccessoryDeviceExpressAlertViewController : SBUIRemoteAlertServiceViewController <PKAccessoryDeviceMonitorDelegate, PKAccessoryDeviceViewDelegate, SBSHardwareButtonEventConsuming> {
    PKAccessoryDevice * _accessoryDevice;
    PKAccessoryDeviceMonitor * _accessoryDeviceMonitor;
    PKAccessoryDeviceView * _accessoryDeviceView;
    long long  _accessoryDeviceViewState;
    bool  _appeared;
    bool  _backlightActive;
    bool  _brightnessRampingAllowed;
    bool  _deviceUILocked;
    NSArray * _fieldPassUniqueIdentifiers;
    PKFieldProperties * _fieldProperties;
    bool  _hasMultiple;
    SBSAssertion * _lockButtonAssertion;
    <BSInvalidatable> * _lockButtonObserver;
    PKAssertion * _notificationSuppressionAssertion;
    NSString * _passUniqueIdentifier;
    CLInUseAssertion * _passbookForegroundAssertion;
    long long  _presentationSource;
    bool  _presentedOnView;
    bool  _processHomeButtonEvents;
    NSMutableDictionary * _registeredExpressObservers;
    id  _staticGlyphResources;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _windowedAccessoryCutoutFrameInScreen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;
+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_appearIfNecessary;
- (bool)_canShowWhileLocked;
- (void)_changeStateIfNecessaryTo:(long long)arg1;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)arg1;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)arg1;
- (void)_dismiss;
- (void)_dismissIfRestricted;
- (void)_dismissImmediately:(bool)arg1;
- (id)_expressNotificationNames;
- (void)_handleExpressNotification:(id)arg1;
- (void)_invalidate;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (void)_registerForExpressTransactionNotifications:(bool)arg1;
- (void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(id /* block */)arg3;
- (void)accessoryDeviceDidChangeStateTo:(long long)arg1;
- (void)accessoryDeviceDidReachHardTimeout;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)didAttachSleeveAccessory:(id)arg1;
- (void)didDetachSleeveAccessory;
- (void)didInvalidateForRemoteAlert;
- (void)didTransitionToAttachedToWindowedAccessory:(bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)handleButtonActions:(id)arg1;
- (id)init;
- (void)loadView;
- (bool)prefersStatusBarHidden;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
