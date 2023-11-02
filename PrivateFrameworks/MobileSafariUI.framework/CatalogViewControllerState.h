
@interface CatalogViewControllerState : NSObject {
    UIViewController * _completionDetailViewController;
    long long  _favoritesState;
    bool  _fieldIsEmpty;
    NSString * _queryString;
    bool  _showingCompletions;
    bool  _showingUniversalFirstTimeExperience;
}

@property (nonatomic, retain) UIViewController *completionDetailViewController;
@property (nonatomic) long long favoritesState;
@property (nonatomic) bool fieldIsEmpty;
@property (nonatomic, copy) NSString *queryString;
@property (getter=isShowingCompletions, nonatomic) bool showingCompletions;
@property (getter=isShowingUniversalFirstTimeExperience, nonatomic) bool showingUniversalFirstTimeExperience;

- (void).cxx_destruct;
- (id)completionDetailViewController;
- (long long)favoritesState;
- (bool)fieldIsEmpty;
- (bool)isShowingCompletions;
- (bool)isShowingUniversalFirstTimeExperience;
- (id)queryString;
- (void)setCompletionDetailViewController:(id)arg1;
- (void)setFavoritesState:(long long)arg1;
- (void)setFieldIsEmpty:(bool)arg1;
- (void)setQueryString:(id)arg1;
- (void)setShowingCompletions:(bool)arg1;
- (void)setShowingUniversalFirstTimeExperience:(bool)arg1;

@end
