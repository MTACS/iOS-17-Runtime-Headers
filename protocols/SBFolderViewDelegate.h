
@protocol SBFolderViewDelegate <SBFolderViewDragDelegate, NSObject>

@required

- (bool)folderView:(SBFolderView *)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (void)folderView:(SBFolderView *)arg1 currentPageIndexDidChange:(long long)arg2;
- (void)folderView:(SBFolderView *)arg1 currentPageIndexWillChange:(long long)arg2;
- (void)folderView:(SBFolderView *)arg1 didAddIconListView:(SBIconListView *)arg2;
- (void)folderView:(SBFolderView *)arg1 didRemoveIconListView:(SBIconListView *)arg2;
- (void)folderView:(SBFolderView *)arg1 willAnimateScrollToPageIndex:(long long)arg2;
- (void)folderViewDidChangeOrientation:(SBFolderView *)arg1;
- (void)folderViewDidEndScrolling:(SBFolderView *)arg1;
- (void)folderViewDidScroll:(SBFolderView *)arg1;
- (void)folderViewShouldBeginEditing:(SBFolderView *)arg1;
- (void)folderViewShouldClose:(SBFolderView *)arg1 withPinchGesture:(UIPinchGestureRecognizer *)arg2;
- (void)folderViewShouldEndEditing:(SBFolderView *)arg1;
- (void)folderViewWillBeginScrolling:(SBFolderView *)arg1;
- (void)folderViewWillUpdatePageDuringScrolling:(SBFolderView *)arg1;
- (Class)iconListViewClassForFolderView:(SBFolderView *)arg1;
- (NSString *)iconLocationForFolderView:(SBFolderView *)arg1;

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentOverlayInsetsFromParentIfAvailableForFolderView:(SBFolderView *)arg1;
- (<SBFolderViewDragDelegate> *)draggingDelegateForFolderView:(SBFolderView *)arg1;
- (UIColor *)folderView:(SBFolderView *)arg1 accessibilityTintColorForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)folderView:(SBFolderView *)arg1 didBeginEditingTitle:(UITextField *)arg2;
- (void)folderView:(SBFolderView *)arg1 didEndEditingTitle:(UITextField *)arg2;
- (double)minimumHomeScreenScaleForFolderView:(SBFolderView *)arg1;

@end
