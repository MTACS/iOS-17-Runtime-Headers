
@interface SiriTTSUserPreferences : NSObject

+ (id)defaultOutputLanguageIdentifier;
+ (id)getAvailableLanguageIdentifiers;
+ (bool)getLogging;
+ (id)getSpokenLanguageIdentifier;
+ (void)setLogging:(bool)arg1;
+ (void)setSpokenLanguageIdentifier:(id)arg1;
+ (id)spokenLanguageChangedNotification;

- (void).cxx_destruct;
- (id)init;

@end
