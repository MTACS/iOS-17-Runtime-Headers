
@interface PRELocaleDetection : NSObject {
    unsigned long long  _languageLimit;
    _PASLRUCache * _lastConfidentLocaleForSender;
    NSDictionary * _preferredLocales;
}

+ (bool)isLanguageMismatchedForIdentifier:(id)arg1 withIdentifier:(id)arg2;
+ (id)languageTagForLocaleIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_bestLocaleForLanguageTag:(id)arg1;
- (id)_getPreferredLocales;
- (id)_userLanguageDetectedFromString:(id)arg1 preferredLocales:(id)arg2;
- (id)_userLocaleDetectedFromString:(id)arg1;
- (id)init;
- (id)initWithLanguageLimit:(unsigned long long)arg1 withPreferredLocales:(id)arg2;
- (bool)isLanguageMismatchedForMessage:(id)arg1 withLocaleIdentifier:(id)arg2;
- (id)localeForIncomingMessages:(id)arg1 outgoingMessages:(id)arg2 defaultLocale:(id)arg3 defaultLocaleLastChangedDate:(id)arg4 sender:(id)arg5;
- (id)localeForMessage:(id)arg1 outgoingMessageHistory:(id)arg2 defaultLocale:(id)arg3 defaultLocaleLastChangedDate:(id)arg4 sender:(id)arg5;

@end
