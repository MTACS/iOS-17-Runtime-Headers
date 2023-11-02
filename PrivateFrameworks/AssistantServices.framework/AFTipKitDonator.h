
@interface AFTipKitDonator : NSObject

+ (void)_donateToTipsWithIdentifier:(id)arg1 bundleID:(id)arg2 context:(id)arg3 userInfo:(id)arg4;
+ (void)donateAnnounceNotificationsInCarPlaySettingsChange:(long long)arg1;
+ (void)donateCallHangUpAvailabilityChanged:(bool)arg1;
+ (void)donateDictationEventStartedForBundleId:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
+ (void)donateMessageSentForBundleId:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
+ (void)donateSiriEventStartedForBundleId:(id)arg1 context:(id)arg2 userInfo:(id)arg3;

@end
