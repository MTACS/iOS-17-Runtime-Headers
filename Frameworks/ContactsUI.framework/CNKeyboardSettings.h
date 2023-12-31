
@interface CNKeyboardSettings : NSObject

+ (long long)autocapitalizationTypeFromDictionary:(id)arg1;
+ (long long)autocorrectionTypeFromDictionary:(id)arg1;
+ (bool)contentsIsSingleValue:(id)arg1;
+ (long long)keyboardTypeFromDictionary:(id)arg1;
+ (id)newKeyboardSettingsForProperty:(id)arg1;
+ (bool)usesTextSuggestionDelegate:(id)arg1;

@end
