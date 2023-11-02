
@protocol SBControlCenterObserver <NSObject>

@required

- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;

@end
