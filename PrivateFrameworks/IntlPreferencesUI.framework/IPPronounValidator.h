
@interface IPPronounValidator : NSObject {
    NSArray * _displayedMorphologies;
    NSArray * _examplePlaceholders;
    NSArray * _exampleStrings;
    NSString * _language;
    long long  _maxPronounLength;
    NSString * _propertyPreferenceName;
    NSMutableArray * _rememberedPronouns;
    NSRegularExpression * _validationRegex;
}

@property (nonatomic, retain) NSArray *displayedMorphologies;
@property (nonatomic, retain) NSArray *examplePlaceholders;
@property (nonatomic, retain) NSArray *exampleStrings;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) long long maxPronounLength;
@property (nonatomic, retain) NSString *propertyPreferenceName;
@property (nonatomic, retain) NSMutableArray *rememberedPronouns;
@property (nonatomic, retain) NSRegularExpression *validationRegex;

+ (bool)canDisplayPronounPicker;
+ (bool)currentUILocaleSupportsPronounPicking;
+ (id)initialPronounPickerLanguage;
+ (bool)languageSupportsPronounPicking:(id)arg1;
+ (id)preferredPronounLocalizationForLanguage:(id)arg1;
+ (bool)shouldDisplayPronounPickerByDefault;
+ (id)supportedPronounLocalizations;

- (void).cxx_destruct;
- (id)displayedMorphologies;
- (id)examplePlaceholders;
- (id)exampleStrings;
- (void)fillInMissingEntriesInArray:(id)arg1 fromArray:(id)arg2;
- (id)fillInRememberedPronouns:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)language;
- (long long)maxPronounLength;
- (id)morphologyFromString:(id)arg1;
- (bool)pronounHasValidChars:(id)arg1;
- (bool)pronounIsValidLength:(id)arg1;
- (id)propertyPreferenceName;
- (void)rememberUserEntry:(id)arg1;
- (id)rememberedPronouns;
- (void)setDisplayedMorphologies:(id)arg1;
- (void)setExamplePlaceholders:(id)arg1;
- (void)setExampleStrings:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMaxPronounLength:(long long)arg1;
- (void)setPropertyPreferenceName:(id)arg1;
- (void)setRememberedPronouns:(id)arg1;
- (void)setValidationRegex:(id)arg1;
- (bool)userSuppliedPronouns:(id)arg1 matchKnownPronouns:(id)arg2;
- (id)validationRegex;

@end
