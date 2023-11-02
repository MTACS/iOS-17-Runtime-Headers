
@protocol SBHModalLibraryPresentationContext <NSObject>

@required

- (<BSInvalidatable> *)acquireOrderPresentationSourceContainerViewBeforeLibraryViewAssertionForReason:(NSString *)arg1;
- (MTMaterialView *)backgroundView;
- (UIView *)containerView;
- (SBIconListView *)iconListView;
- (SBHLibraryIconViewController *)libraryIconViewController;
- (SBIconView *)libraryPodIconView;
- (UIView *)libraryView;
- (void)noteWillAnimateToEndpoint:(long long)arg1 withAnimationDuration:(double)arg2;
- (UIScrollView *)podScrollView;
- (SBHSearchBar *)searchBar;
- (bool)shouldUseTranslatingAnimationBehavior;
- (UIView *)sourceContainerView;

@end
