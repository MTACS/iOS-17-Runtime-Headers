
@protocol CSLPRFAppBacklightPrivacyProperties <NSObject>

@required

- (bool)privacyDuringAlwaysOnForApp;
- (bool)privacyDuringAlwaysOnForNotification;
- (bool)watchAppSupportsAlwaysOnDisplay;

@end
