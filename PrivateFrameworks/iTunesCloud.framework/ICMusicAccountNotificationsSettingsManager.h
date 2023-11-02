
@interface ICMusicAccountNotificationsSettingsManager : NSObject

+ (id)sharedManager;

- (id)_getSwitchesDependingOnSubscriptionStatus:(id)arg1 withResponse:(id)arg2 togglingSwitchesToValue:(bool)arg3;
- (id)cachedAccountNotificationsShowInLibrarySwitch;
- (void)getAccountNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)setAccountNotificationsArtistContentFeature:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCachedAccountNotificationsShowInLibraryEnabled:(bool)arg1;
- (id)storeRequestContext;

@end
