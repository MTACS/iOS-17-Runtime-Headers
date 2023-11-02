
@protocol DBEnvironmentConfigurationObserving <NSObject>

@optional

- (void)environmentConfiguration:(DBEnvironmentConfiguration *)arg1 appearanceStyleDidChange:(long long)arg2;
- (void)environmentConfiguration:(DBEnvironmentConfiguration *)arg1 mapsAppearanceStyleDidChange:(long long)arg2;
- (void)environmentConfiguration:(DBEnvironmentConfiguration *)arg1 nightModeDidChange:(bool)arg2;
- (void)environmentConfiguration:(DBEnvironmentConfiguration *)arg1 receivedShowUIWithURL:(NSURL *)arg2;
- (void)environmentConfiguration:(DBEnvironmentConfiguration *)arg1 viewAreaDidChangeFromViewAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 toViewAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 duration:(double)arg6 transitionControlType:(unsigned long long)arg7;
- (void)environmentConfigurationPairedVehiclesDidChange:(DBEnvironmentConfiguration *)arg1;
- (void)stopUIReceivedForEnvironmentConfiguration:(DBEnvironmentConfiguration *)arg1;

@end
