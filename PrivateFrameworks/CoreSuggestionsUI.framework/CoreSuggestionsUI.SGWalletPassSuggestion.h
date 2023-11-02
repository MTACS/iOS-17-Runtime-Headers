
@interface CoreSuggestionsUI.SGWalletPassSuggestion : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    void identifier;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void passDictionary;
    void passViewManager;
    void realtime;
    void state;
    void suggestionDelegate;
}

@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRealtimeWalletPass:(id)arg1;
- (id)realtimeSuggestion;
- (void)setSuggestionDelegate:(id)arg1;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (long long)suggestionCategoryActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionDelegate;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;

@end
