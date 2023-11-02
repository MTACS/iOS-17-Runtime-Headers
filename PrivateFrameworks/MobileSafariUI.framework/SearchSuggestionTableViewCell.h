
@interface SearchSuggestionTableViewCell : CompletionListTableViewCell {
    id /* block */  _accessoryActionHandler;
    CompletionArrowView * _accessoryView;
    bool  _hidesAccessoryView;
}

@property (nonatomic, copy) id /* block */ accessoryActionHandler;
@property (nonatomic) bool hidesAccessoryView;
@property (nonatomic) bool hidesImage;
@property (nonatomic) bool usesDownBackwardCompletionArrow;

+ (id)_matchedTextAttributes;
+ (id)_suggestedTextAttributes;

- (void).cxx_destruct;
- (void)_accessoryButtonTapped:(id)arg1;
- (id /* block */)accessoryActionHandler;
- (bool)hidesAccessoryView;
- (bool)hidesImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessoryActionHandler:(id /* block */)arg1;
- (void)setHidesAccessoryView:(bool)arg1;
- (void)setHidesImage:(bool)arg1;
- (void)setSearchSuggestion:(id)arg1 withQuery:(id)arg2;
- (void)setUsesDownBackwardCompletionArrow:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)usesDownBackwardCompletionArrow;

@end
