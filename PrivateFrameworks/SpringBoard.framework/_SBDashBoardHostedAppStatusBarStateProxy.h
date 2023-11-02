
@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {
    SBDashBoardHostedAppViewController * _hostedAppVCBackReference;
}

@property (nonatomic) SBDashBoardHostedAppViewController *hostedAppVCBackReference;

- (void).cxx_destruct;
- (long long)_fallbackInterfaceOrientation;
- (double)_statusBarAlpha;
- (bool)_suppressInheritedPartStyles;
- (id)hostedAppVCBackReference;
- (void)setHostedAppVCBackReference:(id)arg1;

@end
