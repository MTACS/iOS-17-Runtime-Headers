
@interface WBSFormToABBinder : NSObject

+ (struct __WBSFieldLabelPatternMatcherArray { }*)addressBookFieldLabelPatternMatchers;
+ (id)allSynonymsForMatch:(id)arg1 formAppearsToBeChinese:(bool)arg2;
+ (struct __WBSFieldLabelPatternMatcherArray { }*)emailFieldLabelPatternMatchers;
+ (unsigned long long)indexOfBestMatchForString:(id)arg1 inArray:(id)arg2 startingPosition:(unsigned long long*)arg3;
+ (id)specifierForAutocompleteToken:(id)arg1;
+ (id)specifierForLabel:(id)arg1;

@end
