
@protocol SBHRootFolderCustomViewPresenting <NSObject, SBHLegibility, SBHVisibleContentPresenter>

@optional

- (<SBIconListViewQuerying> *)iconListViewQueryable;
- (<SBIconLocationPresenting> *)iconLocationPresenter;
- (<SBIconViewQuerying> *)iconViewQueryable;
- (bool)shouldBeIndicatedInPageControl;

@end
