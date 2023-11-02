
@interface CoreSuggestionsUI.SGContactSuggestion : NSObject <CNContactViewControllerDelegate, SGSuggestion, SGSuggestionCategory> {
    void contactViewController;
    void kStringKeyLabeledValueFormat;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void realtimeContact;
    void suggestionDelegate;
}

@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;

- (void).cxx_destruct;
- (void)confirm:(bool)arg1 suggestion:(id)arg2 completion:(id /* block */)arg3;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (id)init;
- (id)initWithSgContact:(id)arg1;
- (id)mailingAddressFromPostalAddress:(id)arg1;
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
- (id)suggestionDismissAction;
- (id)suggestionImage;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)suggestionTitle;

@end
