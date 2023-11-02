
@interface _EARLanguageDetectorRequestContext : NSObject <NSCopying> {
    NSString * _currentDictationLanguage;
    NSDictionary * _dictationLanguagePriors;
    NSSet * _dictationLanguages;
    NSString * _globalLastKeyboardUsed;
    NSDictionary * _keyboardConvoLanguagePriors;
    NSDictionary * _keyboardGlobalLanguagePriors;
    NSDictionary * _languagePriors;
    NSArray * _multilingualKeyboardLanguages;
    NSString * _previousMessageLanguage;
    NSArray * _recentMessages;
    NSNumber * _wasLanguageToggled;
}

@property (readonly) /* Warning: unhandled struct encoding: '{LDContext={map<quasar::language_detector::Locale' */ struct  LDContext; /* unknown property attribute:  std::less<quasar::language_detector::Locale>>>=Q}}})B}} */
@property (nonatomic, copy) NSString *currentDictationLanguage;
@property (nonatomic, copy) NSDictionary *dictationLanguagePriors;
@property (nonatomic, copy) NSSet *dictationLanguages;
@property (nonatomic, copy) NSString *globalLastKeyboardUsed;
@property (nonatomic, copy) NSDictionary *keyboardConvoLanguagePriors;
@property (nonatomic, copy) NSDictionary *keyboardGlobalLanguagePriors;
@property (nonatomic, copy) NSDictionary *languagePriors;
@property (nonatomic, copy) NSArray *multilingualKeyboardLanguages;
@property (nonatomic, copy) NSString *previousMessageLanguage;
@property (nonatomic, copy) NSArray *recentMessages;
@property (nonatomic, copy) NSNumber *wasLanguageToggled;

+ (id)contextFromLDContext:(const void*)arg1;

- (void).cxx_destruct;
- (struct LDContext { struct map<quasar::language_detector::Locale, double, std::less<quasar::language_detector::Locale>, std::allocator<std::pair<const quasar::language_detector::Locale, double>>> { struct __tree<std::__value_type<quasar::language_detector::Locale, double>, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>>, std::allocator<std::__value_type<quasar::language_detector::Locale, double>>> { void *x_1_2_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<quasar::language_detector::Locale, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__map_value_compare<quasar::language_detector::Locale, std::__value_type<quasar::language_detector::Locale, double>, std::less<quasar::language_detector::Locale>>> { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; })LDContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDictationLanguage;
- (id)dictationLanguagePriors;
- (id)dictationLanguages;
- (id)globalLastKeyboardUsed;
- (id)keyboardConvoLanguagePriors;
- (id)keyboardGlobalLanguagePriors;
- (id)languagePriors;
- (id)multilingualKeyboardLanguages;
- (id)previousMessageLanguage;
- (id)recentMessages;
- (void)setCurrentDictationLanguage:(id)arg1;
- (void)setDictationLanguagePriors:(id)arg1;
- (void)setDictationLanguages:(id)arg1;
- (void)setGlobalLastKeyboardUsed:(id)arg1;
- (void)setKeyboardConvoLanguagePriors:(id)arg1;
- (void)setKeyboardGlobalLanguagePriors:(id)arg1;
- (void)setLanguagePriors:(id)arg1;
- (void)setMultilingualKeyboardLanguages:(id)arg1;
- (void)setPreviousMessageLanguage:(id)arg1;
- (void)setRecentMessages:(id)arg1;
- (void)setWasLanguageToggled:(id)arg1;
- (id)wasLanguageToggled;

@end
