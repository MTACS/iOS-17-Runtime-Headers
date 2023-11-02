
@interface PSLocaleSelector : NSObject

- (id)availableLocaleIdentifiers;
- (id)currentLocale;
- (void)setLocaleFromLanguageIdentifier:(id)arg1;
- (void)setLocaleFromRegionCode:(id)arg1;

@end
