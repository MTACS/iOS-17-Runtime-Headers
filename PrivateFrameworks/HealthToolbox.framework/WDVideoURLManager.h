
@interface WDVideoURLManager : NSObject

+ (id)_baseURLForIdentifier:(id)arg1;
+ (void)_fetchPreferredURLForIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)_fetchRawManifestForIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (id)_parseJSON:(id)arg1;
+ (void)fetchURLForVideoWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
+ (bool)isVideoPlaybackEnabled;
+ (id)preferredLanguageFromLanguages:(id)arg1 languagePreferences:(id)arg2;

@end
