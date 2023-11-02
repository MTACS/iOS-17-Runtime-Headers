
@protocol CSLPRFAppBacklightPrivacyMutableProperties <CSLPRFAppBacklightPrivacyProperties>

@required

- (bool)privacyDuringAlwaysOnForApp;
- (bool)privacyDuringAlwaysOnForNotification;
- (void)setPrivacyDuringAlwaysOnForApp:(bool)arg1;
- (void)setPrivacyDuringAlwaysOnForNotification:(bool)arg1;

@end
