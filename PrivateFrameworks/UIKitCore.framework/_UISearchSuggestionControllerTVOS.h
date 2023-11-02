
@interface _UISearchSuggestionControllerTVOS : _UISearchSuggestionController {
    bool  _shouldDisplayDefaultSuggestion;
}

@property (nonatomic) bool shouldDisplayDefaultSuggestion;

- (id)makeCollectionView;
- (void)setShouldDisplayDefaultSuggestion:(bool)arg1;
- (bool)shouldDisplayDefaultSuggestion;
- (void)updateSearchString:(id)arg1;

@end
