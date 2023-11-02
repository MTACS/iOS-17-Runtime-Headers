
@protocol CSLPRFDepthAutoLaunchSettingCoordinatorImpl <NSObject>

@required

- (void)applySettings:(CSLPRFDepthAutoLaunchSettings *)arg1;
- (<CSLPRFDepthAutoLaunchSettingCoordinatorImplDelegate> *)delegate;
- (void)setDelegate:(id <CSLPRFDepthAutoLaunchSettingCoordinatorImplDelegate>)arg1;
- (CSLPRFDepthAutoLaunchSettings *)settings;

@end
