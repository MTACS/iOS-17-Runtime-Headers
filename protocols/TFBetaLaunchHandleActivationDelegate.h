
@protocol TFBetaLaunchHandleActivationDelegate <NSObject>

@required

- (void)betaLaunchHandle:(TFBetaLaunchHandle *)arg1 activateIfNeededEndedWithResult:(bool)arg2;

@optional

- (void)betaLaunchHandleDidDismissInfo:(TFBetaLaunchHandle *)arg1;

@end
