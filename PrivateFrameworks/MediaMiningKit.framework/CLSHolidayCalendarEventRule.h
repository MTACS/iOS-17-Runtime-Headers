
@interface CLSHolidayCalendarEventRule : NSObject {
    bool  _backfillForAllCountryCodes;
    bool  _backfillForCommonCelebratedCountryCodes;
    bool  _backfillForCommonCelebratedLanguages;
    unsigned long long  _category;
    NSDictionary * _commonCelebratedCountryCodes;
    NSDictionary * _commonCelebratedLanguages;
    <CLSHolidayCalendarEventDateRuleDelegate> * _dateRuleDelegate;
    NSArray * _defaultDateRules;
    double  _defaultLocationScore;
    NSString * _localizedName;
    NSString * _name;
    CLSHolidayCalendarEventRuleRequiredTraits * _requiredTraits;
    bool  _skipSceneCriteriaIfInteresting;
    bool  _triggerMemoryForAllLocales;
    bool  _triggerMemoryForCommonCelebratedCountryCodes;
}

@property (nonatomic, readonly) bool backfillForAllCountryCodes;
@property (nonatomic, readonly) bool backfillForCommonCelebratedCountryCodes;
@property (nonatomic, readonly) bool backfillForCommonCelebratedLanguages;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) NSDictionary *commonCelebratedCountryCodes;
@property (nonatomic, readonly) NSDictionary *commonCelebratedLanguages;
@property (nonatomic) <CLSHolidayCalendarEventDateRuleDelegate> *dateRuleDelegate;
@property (nonatomic, readonly) NSArray *defaultDateRules;
@property (nonatomic, readonly) double defaultLocationScore;
@property (nonatomic, readonly) bool isCelebration;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CLSHolidayCalendarEventRuleRequiredTraits *requiredTraits;
@property (nonatomic, readonly) bool skipSceneCriteriaIfInteresting;
@property (nonatomic, readonly) bool triggerMemoryForAllLocales;
@property (nonatomic, readonly) bool triggerMemoryForCommonCelebratedCountryCodes;

+ (id)localizedNameForName:(id)arg1;

- (void).cxx_destruct;
- (id)_dateRuleForYear:(long long)arg1 countryCode:(id)arg2;
- (id)_dateRuleForYear:(long long)arg1 supportedLocale:(id)arg2;
- (bool)_isMatchingOnlyLocalDate:(id)arg1 countryCode:(id)arg2;
- (id)_localeOverrideForDescription:(id)arg1 uppercaseLocaleCode:(bool)arg2;
- (id)_scoreForEventOverride:(id)arg1 sceneNames:(id)arg2;
- (id)allSceneNames;
- (bool)backfillForAllCountryCodes;
- (bool)backfillForCommonCelebratedCountryCodes;
- (bool)backfillForCommonCelebratedLanguages;
- (bool)backfillForCountryCode:(id)arg1;
- (bool)backfillForLanguageCodes:(id)arg1;
- (unsigned long long)category;
- (id)commonCelebratedCountryCodes;
- (id)commonCelebratedLanguages;
- (id)dateRuleDelegate;
- (id)defaultDateRules;
- (double)defaultLocationScore;
- (id)description;
- (bool)evaluateOnlyTraits:(id)arg1 evaluateLocationTraits:(bool)arg2;
- (bool)evaluateWithLocalDate:(id)arg1 traits:(id)arg2 countryCode:(id)arg3;
- (id)explicitlySupportedCountryCodes;
- (unsigned long long)hash;
- (id)initWithEventDescription:(id)arg1;
- (bool)isCelebration;
- (bool)isEqual:(id)arg1;
- (double)languageScoreForLanguageCode:(id)arg1;
- (id)localDateByEvaluatingRuleForYear:(long long)arg1 countryCode:(id)arg2;
- (id)localDateByEvaluatingRuleForYear:(long long)arg1 languageCode:(id)arg2;
- (id)localizedName;
- (double)locationScoreForCountryCode:(id)arg1;
- (id)name;
- (unsigned long long)peopleTrait;
- (id)requiredTraits;
- (id)scoreForCountryCode:(id)arg1 sceneNames:(id)arg2;
- (id)scoreForLanguageCode:(id)arg1 sceneNames:(id)arg2;
- (void)setDateRuleDelegate:(id)arg1;
- (bool)skipSceneCriteriaIfInteresting;
- (bool)triggerMemoryForAllLocales;
- (bool)triggerMemoryForCommonCelebratedCountryCodes;
- (bool)triggerMemoryForCountryCode:(id)arg1;

@end
