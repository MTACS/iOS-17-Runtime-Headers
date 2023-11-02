
@interface ACMBaseLocale : NSObject {
    NSDictionary * _localeStrings;
    ACMBaseLocale * _nextLocale;
}

@property (nonatomic, retain) NSDictionary *localeStrings;
@property (nonatomic, retain) ACMBaseLocale *nextLocale;

+ (id)createLocaleForIdentifier:(id)arg1;
+ (void)initialize;
+ (id)localizedString:(id)arg1;
+ (void)setupRecoveringPreferredLanguages;
+ (void)setupUsingPreferredLanguages;
+ (id)sharedInstance;

- (void)dealloc;
- (id)localeStrings;
- (id)nextLocale;
- (id)objectForKey:(id)arg1;
- (void)setLocaleStrings:(id)arg1;
- (void)setNextLocale:(id)arg1;

@end
