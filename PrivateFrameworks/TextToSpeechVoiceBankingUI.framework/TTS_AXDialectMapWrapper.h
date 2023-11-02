
@interface TTS_AXDialectMapWrapper : NSObject {
    AXDialectMap * _dialectMap;
}

@property (nonatomic, retain) AXDialectMap *dialectMap;
@property (nonatomic, readonly) NSString *languageNameAndLocaleInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameInNativeLocale;
@property (nonatomic, readonly) NSString *localeNameInCurrentLocale;

- (void).cxx_destruct;
- (id)dialectMap;
- (id)initWithDialectMap:(id)arg1;
- (id)languageNameAndLocaleInCurrentLocale;
- (id)languageNameInCurrentLocale;
- (id)languageNameInNativeLocale;
- (id)localeNameInCurrentLocale;
- (void)setDialectMap:(id)arg1;

@end
