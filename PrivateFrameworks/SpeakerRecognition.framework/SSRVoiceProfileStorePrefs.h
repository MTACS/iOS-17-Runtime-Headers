
@interface SSRVoiceProfileStorePrefs : NSObject

+ (id)sharedStorePrefs;

- (long long)getVoiceProfileStoreVersion;
- (id)loadKnownUserVoiceProfiles;
- (void)saveKnownUserVoiceProfiles:(id)arg1;
- (void)setVoiceProfileStoreVersion:(unsigned long long)arg1;

@end
