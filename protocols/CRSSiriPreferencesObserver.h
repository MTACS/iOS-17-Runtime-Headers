
@protocol CRSSiriPreferencesObserver <NSObject>

@optional

- (void)preferences:(CRSSiriPreferences *)arg1 announceNotificationsInCarPlayTemporarilyDisabledChanged:(bool)arg2;
- (void)preferences:(CRSSiriPreferences *)arg1 autoSendInCarPlayEnabledChanged:(bool)arg2;
- (void)preferences:(CRSSiriPreferences *)arg1 autoSendInHeadphonesEnabledChanged:(bool)arg2;
- (void)preferences:(CRSSiriPreferences *)arg1 carPlayAnnounceEnablementTypeChanged:(long long)arg2;
- (void)preferences:(CRSSiriPreferences *)arg1 mainAutoSendEnabledChanged:(bool)arg2;
- (void)preferences:(CRSSiriPreferences *)arg1 showAppsBehindSiriInCarPlayEnabledChanged:(bool)arg2;

@end
