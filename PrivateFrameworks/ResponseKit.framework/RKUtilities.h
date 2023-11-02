
@interface RKUtilities : NSObject

+ (bool)RKRepairStringNeeded:(id)arg1;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (id)getDeviceModel;
+ (bool)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)arg1;
+ (bool)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)arg1;
+ (bool)isLanguageSupportedBySmartPunctuation:(id)arg1;
+ (bool)isLanguageSupportedForLemmatization:(id)arg1;
+ (bool)isLanguageSupportedForPartOfSpeech:(id)arg1;
+ (id)normalizeForPersonalization:(id)arg1;
+ (bool)prefixInArray:(id)arg1 withArray:(id)arg2;
+ (id)removeEmoji:(id)arg1;
+ (id)removeMultipleWhitespaces:(id)arg1;
+ (id)stripDiacritics:(id)arg1;
+ (id)stripEmojiSkinTones:(id)arg1;
+ (id)stripPunctuations:(id)arg1;
+ (bool)suffixInArray:(id)arg1 withArray:(id)arg2;
+ (bool)tokenInArray:(id)arg1 withArray:(id)arg2;

@end
