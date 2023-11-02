
@protocol SFStartPageDataSourceObserving <NSObject>

@required

- (void)reloadDataAnimatingDifferences:(bool)arg1;
- (void)reloadNavigationItemAnimated:(bool)arg1;

@optional

- (void)reloadSection:(WBSStartPageSection *)arg1 animated:(bool)arg2;

@end
