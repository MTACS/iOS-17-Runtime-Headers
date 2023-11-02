
@interface VOSSettingsHelper : NSObject {
    NSArray * _enabledLanguageCodes;
}

@property (nonatomic, retain) NSArray *enabledLanguageCodes;
@property (getter=isSlideToTypeEnabled, nonatomic) bool slideToTypeEnabled;

+ (id /* block */)activitiesFormatter;
+ (id /* block */)brailleInputOutputFormatter;
+ (id /* block */)brailleTableFormatter;
+ (id /* block */)durationFormatter;
+ (id /* block */)gestureDirectionFormatter;
+ (id /* block */)languageFormatterForEnabledLanguageCodes:(id)arg1;
+ (id /* block */)mediaDescriptionsFormatter;
+ (id /* block */)navigateImagesFormatter;
+ (id /* block */)navigationStyleFormatter;
+ (id /* block */)percentageFormatter;
+ (id /* block */)phoneticFeedbackFormatter;
+ (id /* block */)punctuationFormatter;
+ (id)sharedInstance;
+ (id /* block */)typingFeedbackFormatter;
+ (id /* block */)typingStyleFormatter;

- (void).cxx_destruct;
- (id)_enabledLanguageCodes;
- (id /* block */)_formatterForItem:(id)arg1;
- (id)_init;
- (id)enabledLanguageCodes;
- (id)formattedValue:(id)arg1 withItem:(id)arg2;
- (id)identifierForItem:(id)arg1;
- (bool)isItemSupported:(id)arg1;
- (bool)isSlideToTypeEnabled;
- (id)nameForItem:(id)arg1;
- (id)possibleValuesForSettingsItem:(id)arg1;
- (void)saveUserSettingsItems:(id)arg1;
- (id)scaledValue:(id)arg1 withItem:(id)arg2;
- (void)setEnabledLanguageCodes:(id)arg1;
- (void)setNextValueForItem:(id)arg1 inDirection:(long long)arg2;
- (void)setSlideToTypeEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forSettingsItem:(id)arg2;
- (id)userSettingsItems;
- (id)valueForSettingsItem:(id)arg1;

@end
