
@interface _SFPerSitePreferenceNotifyingListController : PSListController

- (void)_didUpdatePerSitePreferenceNotificationReceived:(id)arg1;
- (void)_didUpdatePerSitePreferenceRemotely:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)notifyPerSitePreferenceValueDidChange;
- (void)perSitePreferenceValueDidChange;

@end
