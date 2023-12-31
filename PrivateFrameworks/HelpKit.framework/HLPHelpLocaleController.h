
@interface HLPHelpLocaleController : HLPRemoteDataController {
    NSURL * _helpBookURL;
    NSArray * _locales;
    NSArray * _preferredLanguagesOverride;
    NSArray * _supportedLanguageCodes;
}

@property (nonatomic, retain) NSArray *locales;
@property (nonatomic, retain) NSArray *preferredLanguagesOverride;

- (void).cxx_destruct;
- (id)currentLocale;
- (id)englishLocale;
- (id)initWithURL:(id)arg1;
- (id)localeWithPreferredLanguages:(id)arg1;
- (id)locales;
- (id)preferredLanguagesOverride;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (void)setLocales:(id)arg1;
- (void)setPreferredLanguagesOverride:(id)arg1;

@end
