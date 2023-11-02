
@interface HKSpokenLanguage : NSObject {
    NSString * _identifier;
    unsigned long long  _languageCategoryType;
    NSString * _languageInCurrentLocale;
    NSString * _languageInLanguageLocale;
}

@property (nonatomic, retain) NSString *identifier;
@property unsigned long long languageCategoryType;
@property (nonatomic, retain) NSString *languageInCurrentLocale;
@property (nonatomic, retain) NSString *languageInLanguageLocale;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithLanguageIdentifier:(id)arg1 forCategory:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)languageCategoryType;
- (id)languageInCurrentLocale;
- (id)languageInLanguageLocale;
- (id)localizedStringForDisplay;
- (void)setIdentifier:(id)arg1;
- (void)setLanguageCategoryType:(unsigned long long)arg1;
- (void)setLanguageInCurrentLocale:(id)arg1;
- (void)setLanguageInLanguageLocale:(id)arg1;

@end
