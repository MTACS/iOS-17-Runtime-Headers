
@interface _NSPersonNameComponentsStyleFormatterAbbreviated : _NSPersonNameComponentsStyleFormatter

- (id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(bool)arg3;
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)abbreviatedKeys;
- (id)fallbackStyleFormatter;
- (id)keysOfInterest;
- (bool)shouldIgnoreComponentsContainingSpecialCharacters;

@end
