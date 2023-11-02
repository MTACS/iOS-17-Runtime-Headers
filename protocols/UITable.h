
@protocol UITable <UIEditable, UITableConstantsTableProviding>

@required

- (UIColor *)_accessoryBaseColor;
- (double)_backgroundInset;
- (double)_bottomPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellSafeAreaInsets;
- (void)_headerFooterDidInvalidateIntrinsicContentSize:(UITableViewHeaderFooterView *)arg1;
- (double)_indexBarExtentFromEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_indexFrame;
- (bool)_isShowingIndex;
- (UIColor *)_multiselectCheckmarkColor;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_rawSectionContentInset;
- (UIScrollView *)_scrollView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sectionContentInset;
- (bool)_sectionContentInsetFollowsLayoutMargins;
- (double)_sectionCornerRadius;
- (bool)_separatorInsetIsRelativeToCellEdges;
- (bool)_shouldHaveFooterViewForSection:(long long)arg1;
- (bool)_shouldHaveHeaderViewForSection:(long long)arg1;
- (double)_topPadding;
- (bool)allowsMultipleSelection;
- (bool)allowsMultipleSelectionDuringEditing;
- (bool)cellLayoutMarginsFollowReadableWidth;
- (double)estimatedRowHeight;
- (double)estimatedSectionFooterHeight;
- (double)estimatedSectionHeaderHeight;
- (bool)overlapsSectionHeaderViews;
- (double)rowHeight;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (bool)usesVariableMargins;

@end
