
@interface AXMLocSupport : NSObject {
    NSLocale * _en_USLocale;
}

@property (nonatomic, retain) NSLocale *en_USLocale;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)baseLanguageForLocale:(id)arg1;
- (id)en_USLocale;
- (bool)localeBaseLanguageIsEnglish:(id)arg1;
- (id)localeForLanguageCode:(id)arg1;
- (id)localeMatchingBaseLanguageOfLocale:(id)arg1 fromLocales:(id)arg2;
- (void)setEn_USLocale:(id)arg1;

@end
