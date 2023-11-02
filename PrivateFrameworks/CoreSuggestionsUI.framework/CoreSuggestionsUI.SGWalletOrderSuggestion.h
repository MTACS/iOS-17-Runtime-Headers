
@interface CoreSuggestionsUI.SGWalletOrderSuggestion : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  orderBundleURL;
    void orderDictionary;
    void orderHelpers;
    void realtimeOrderSuggestion;
    void state;
    void suggestionDelegate;
}

@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRealtimeWalletOrder:(id)arg1;
- (id)realtimeSuggestion;
- (void)setSuggestionDelegate:(id)arg1;
- (long long)suggestionActionButtonType;
- (id)suggestionAttributedSubtitle;
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
