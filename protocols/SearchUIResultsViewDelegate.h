
@protocol SearchUIResultsViewDelegate <NSObject>

@optional

- (void)didBeginScrollingResults;
- (void)didChangeExpansionStateForSection:(SFResultSection *)arg1 expanded:(bool)arg2;
- (void)didScrollPastBottomOfContent;
- (void)didTapInEmptyRegion;
- (void)didUpdateContentScrolledOffScreenStatus:(bool)arg1 animated:(bool)arg2;
- (void)didUpdateKeyboardFocusToResult:(SFSearchResult *)arg1 cardSection:(SFCardSection *)arg2;
- (void)getUserActivityForResult:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: SFSearchResult *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUserActivity *, void*
- (void)resultsViewController:(SearchUIResultsViewController *)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2 animated:(bool)arg3;
- (bool)sectionShouldBeExpanded:(SFResultSection *)arg1;

@end
