
@protocol SBRingerAlertElementDelegate <NSObject>

@required

- (void)ringerAlertElementWantsToBeDismissed:(SBRingerAlertElement *)arg1 forReason:(NSString *)arg2;
- (void)ringerAlertElementWantsToBePresented:(SBRingerAlertElement *)arg1;
- (void)ringerAlertElementWantsToResetAutomaticInvalidationTimer:(SBRingerAlertElement *)arg1;

@end
