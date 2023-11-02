
@interface CSDeviceBlockView : CSModalView {
    UIView * _authenticationView;
    <CSDeviceBlockViewDelegate> * _deviceBlockDelegate;
    UIButton * _emergencyButton;
    UIButton * _unblockDeviceButton;
    UIView * _unblockDeviceView;
}

@property (nonatomic, retain) UIView *authenticationView;
@property (nonatomic, readonly) double buttonsBottomSpacing;
@property (nonatomic) <CSDeviceBlockViewDelegate> *deviceBlockDelegate;
@property (nonatomic, readonly) bool isShowingAuthenticationView;
@property (nonatomic, readonly) bool isShowingUnblockDeviceView;
@property (nonatomic, retain) UIView *unblockDeviceView;

- (void).cxx_destruct;
- (void)_activateConstraints;
- (double)_buttonsBottomSpacing;
- (void)_handleEmergencyButtonAction;
- (void)_handleUnblockButtonAction;
- (void)_updateViewForUnblockDeviceViewAnimated:(bool)arg1;
- (void)addDeviceUnblockButtons;
- (id)authenticationView;
- (double)buttonsBottomSpacing;
- (id)deviceBlockDelegate;
- (bool)isShowingAuthenticationView;
- (bool)isShowingUnblockDeviceView;
- (void)removeDeviceUnblockButtons;
- (void)setAuthenticationView:(id)arg1;
- (void)setDeviceBlockDelegate:(id)arg1;
- (void)setUnblockDeviceView:(id)arg1;
- (id)unblockDeviceView;
- (void)updateViewForUnblockDeviceView;

@end
