
@interface IPLanguageListManager : NSObject {
    NSArray * _preferredLanguages;
    NSLocale * _preferredLocale;
    NSString * _systemDisplayLanguage;
    NSArray * _systemLanguages;
}

@property (nonatomic, readonly) NSString *deviceLanguage;
@property (nonatomic, retain) NSArray *preferredLanguages;
@property (nonatomic, retain) NSLocale *preferredLocale;
@property (nonatomic, readonly) NSString *systemDisplayLanguage;
@property (nonatomic, readonly) NSArray *systemLanguages;

+ (bool)canRemoveLanguages:(id)arg1 fromPreferredLanguages:(id)arg2;
+ (id)effectiveSystemLanguagesWithUnsupportedVariant:(bool)arg1 forPreferredLanguages:(id)arg2;
+ (id)generator;
+ (id)manager;
+ (void)preheat;
+ (id)regionalVariantLanguagesForBaseLanguage:(id)arg1;
+ (id)regionalVariantLanguagesForSystemLanguages;
+ (void)sortByLocalizedLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)deviceLanguage;
- (id)deviceLanguagesForChangingDeviceLanguage:(bool)arg1;
- (id)initWithPreferredLanguages:(id)arg1;
- (id)initWithPreferredLanguages:(id)arg1 preferredLocale:(id)arg2;
- (id)initWithPreferredLanguages:(id)arg1 preferredLocale:(id)arg2 systemLanguages:(id)arg3;
- (id)languageVariants;
- (id)otherLanguages;
- (id)preferredLanguages;
- (id)preferredLocale;
- (void)setPreferredLanguages:(id)arg1;
- (void)setPreferredLocale:(id)arg1;
- (void)setRegion:(id)arg1 updateFirstLanguage:(bool)arg2;
- (id)systemDisplayLanguage;
- (id)systemLanguages;

@end
