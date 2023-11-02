
@protocol SBSystemApertureContextProviding <NSObject>

@optional

- (bool)isAffiliatedWithSessionMonitor;
- (UIColor *)keyColor;
- (double)preferredAlertingDuration:(double)arg1;
- (bool)preventsSwipeToHide;
- (FBScene *)scene;

@end
