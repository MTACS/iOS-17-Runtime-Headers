
@interface BiometricSupportUserNotification : NSObject

+ (bool)didDisplayPearlGlassesBannerNotificationRecently:(double)arg1;
+ (bool)displayPearlGlassesBannerNotification;
+ (void)displayPearlInterlockIssueNotification:(bool)arg1;
+ (void)displayPearlIssueNotification;
+ (void)displaySensorIssueNotificationWithHeader:(id)arg1 message:(id)arg2 button:(id)arg3;
+ (void)displayStopAlertWithHeader:(id)arg1 andMessage:(id)arg2;
+ (void)displayTouchIDIssueNotification;

@end
