
@interface PSLanguageSelector : NSObject

- (id)deviceLanguageIdentifier;
- (id)preferredLanguages;
- (void)setLanguage:(id)arg1 fallback:(id)arg2;
- (id)systemLanguages;

@end
