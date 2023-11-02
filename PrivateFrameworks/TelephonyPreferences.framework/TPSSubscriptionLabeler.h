
@interface TPSSubscriptionLabeler : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _applicableLanguage;
    NSArray * _applicableUnlocalizedLabels;
    NSArray * _cachedResult;
    NSMutableDictionary * _labelDictionary;
    NSLocale * _updatingLocale;
    NSURL * _url;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSString *applicableLanguage;
@property (nonatomic, retain) NSArray *applicableUnlocalizedLabels;
@property (nonatomic, retain) NSArray *cachedResult;
@property (nonatomic, retain) NSMutableDictionary *labelDictionary;
@property (nonatomic, retain) NSLocale *updatingLocale;
@property (nonatomic, retain) NSURL *url;

+ (bool)_dictionary:(id)arg1 containsCollationEquivalentKey:(id)arg2;
+ (id)_groupStringsByCollationEquivalency:(id)arg1;
+ (id)_resultWithAllCharacters:(id /* block */)arg1 string:(id)arg2;
+ (id)displayShortLabelStringsForLongFormShortLabels:(id)arg1;
+ (id)fontAttributeDictionary;
+ (bool)isExclusivelyCJKString:(id)arg1 characterSets:(id)arg2;
+ (bool)isString:(id)arg1 exclusivelyInCharacterSet:(struct USet { }*)arg2;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
+ (id)localizedBadgeLabelsForUnlocalizedLabels:(id)arg1 languageStringOverrides:(id)arg2;
+ (id)localizedLabelForLabel:(id)arg1;
+ (id)localizedLabelForLabel:(id)arg1 longForm:(bool)arg2 languageStringOverrides:(id)arg3;
+ (id)localizedLabelsForLabels:(id)arg1 languageIdentifiers:(id)arg2;
+ (id)localizedLabelsForLabels:(id)arg1 languageStringOverrides:(id)arg2;
+ (id)localizedStringDictionaryForLanguageIdentifiers:(id)arg1 selectedLanguage:(id*)arg2;
+ (id)standardLabelIdentifiers;
+ (id)stringByShorteningString:(id)arg1 maximumWidth:(double)arg2 attributes:(id)arg3;
+ (id)stringsByAbbreviatingToPrefixesOfStrings:(id)arg1;
+ (id)stringsByClippingStrings:(id)arg1 toWidthOfString:(id)arg2;
+ (id)stringsByNumericallyDisambiguatingStrings:(id)arg1;
+ (double)widthOfString:(id)arg1 attributes:(id)arg2;

- (void).cxx_destruct;
- (void)_validateLabelsForInstalledUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
- (id)accessQueue;
- (id)applicableLanguage;
- (id)applicableUnlocalizedLabels;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1;
- (id)cachedLocalizedLabelsForUnlocalizedLabels:(id)arg1 languageIdentifiers:(id)arg2;
- (id)cachedResult;
- (id)initWithLabelStorage:(id)arg1;
- (id)labelDictionary;
- (void)setAccessQueue:(id)arg1;
- (void)setApplicableLanguage:(id)arg1;
- (void)setApplicableUnlocalizedLabels:(id)arg1;
- (void)setCachedResult:(id)arg1;
- (void)setLabelDictionary:(id)arg1;
- (void)setUpdatingLocale:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)updatingLocale;
- (id)url;

@end
