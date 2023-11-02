
@interface SGRadarSuggestion : SGRadarSuggestionBase

+ (id)tapToRadarImage;

- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(bool)arg2;
- (id)_writeEMLtoDiskForMessageWithIdentifier:(id)arg1;
- (id)suggestionCategoryImage;
- (id)suggestionImage;
- (id)suggestionPrimaryAction;

@end
