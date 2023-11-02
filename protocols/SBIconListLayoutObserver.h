
@protocol SBIconListLayoutObserver <NSObject>

@optional

- (void)iconListView:(SBIconListView *)arg1 didAddIconView:(SBIconView *)arg2;
- (void)iconListView:(SBIconListView *)arg1 didRemoveIconView:(SBIconView *)arg2;
- (void)iconListViewDidChangeBoundsSize:(SBIconListView *)arg1;
- (void)iconListViewDidChangeNumberOfPlaceholdersOrLayoutHiddenIcons:(SBIconListView *)arg1;

@end
