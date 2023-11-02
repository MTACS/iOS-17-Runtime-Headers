
@interface _AXUIRootWindow : _UIRootWindow <AXUIWindowProtocol> {
    bool  _isHandlingFullScreenPresentation;
    bool  _shouldRespondToDarkModeChanges;
}

@property (nonatomic) bool isHandlingFullScreenPresentation;
@property (nonatomic) bool shouldRespondToDarkModeChanges;

+ (bool)_isSecure;

- (id)_accessibilityElementCommunityIdentifier;
- (bool)_accessibilityIsIsolatedWindow;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(bool)arg1;
- (id)_layerForCoordinateSpaceConversion;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_normalizedSafeAreaInsets;
- (bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)accessibilityLabel;
- (id)description;
- (bool)isHandlingFullScreenPresentation;
- (void)setIsHandlingFullScreenPresentation:(bool)arg1;
- (void)setShouldRespondToDarkModeChanges:(bool)arg1;
- (bool)shouldRespondToDarkModeChanges;

@end
