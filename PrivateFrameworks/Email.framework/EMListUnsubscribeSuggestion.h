
@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory> {
    EMListUnsubscribeCommand * _listUnsubscribeCommand;
    SGSuggestionPresenter * _suggestionPresenter;
    <SGSuggestionDelegate> * suggestionDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EMListUnsubscribeCommand *listUnsubscribeCommand;
@property (nonatomic, readonly) <SGSuggestion> *suggestion;
@property (nonatomic) <SGSuggestionDelegate> *suggestionDelegate;
@property (nonatomic) SGSuggestionPresenter *suggestionPresenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unsubscribeMessageAlertString;

+ (id)suggestionDismissActionTitle;
+ (id)suggestionPrimaryActionString;
+ (id)unsubscribeTitleAlertString;

- (void).cxx_destruct;
- (void)_sendAnalyticsForUnsubscribe:(long long)arg1;
- (unsigned long long)hash;
- (void)ignore;
- (bool)isEqual:(id)arg1;
- (id)listUnsubscribeCommand;
- (void)setListUnsubscribeCommand:(id)arg1;
- (void)setSuggestionDelegate:(id)arg1;
- (void)setSuggestionPresenter:(id)arg1;
- (id)suggestion;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id /* block */)suggestionComparator;
- (id)suggestionDelegate;
- (id)suggestionDismissAction;
- (id)suggestionPresenter;
- (id)suggestionPrimaryAction;
- (id)suggestionTitle;
- (void)unsubscribe;
- (id)unsubscribeMessageAlertString;

@end
