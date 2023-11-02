
@interface SGRadarSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    NSString * _sourceMessageId;
    <SGSuggestionDelegate> * _suggestionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSourceMessageId:(id)arg1;
- (id)primaryActionTitle;
- (id)realtimeSuggestion;
- (void)setSuggestionDelegate:(id)arg1;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionDelegate;
- (id)suggestionDismissAction;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)suggestionsSecondTitle;

@end
