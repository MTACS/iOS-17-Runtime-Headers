
@protocol ICMutableMusicUserState <NSObject>

@required

- (NSString *)carrierBundleDeviceID;
- (long long)cloudLibrarySyncStatus;
- (ICMusicUserStateCookies *)cookies;
- (ICMusicLibraryAuthTokenStatus *)libraryAuthTokenStatus;
- (ICLightweightMusicSubscriptionStatus *)lightweightSubscriptionStatus;
- (void)setCarrierBundleDeviceID:(NSString *)arg1;
- (void)setCloudLibrarySyncStatus:(long long)arg1;
- (void)setCookies:(ICMusicUserStateCookies *)arg1;
- (void)setLibraryAuthTokenStatus:(ICMusicLibraryAuthTokenStatus *)arg1;
- (void)setLightweightSubscriptionStatus:(ICLightweightMusicSubscriptionStatus *)arg1;
- (void)setSubscriptionStatus:(ICMusicSubscriptionStatus *)arg1;
- (void)setUserProfile:(ICMusicUserProfile *)arg1;
- (void)setUsesListeningHistory:(bool)arg1;
- (ICMusicSubscriptionStatus *)subscriptionStatus;
- (ICMusicUserProfile *)userProfile;
- (bool)usesListeningHistory;

@end
