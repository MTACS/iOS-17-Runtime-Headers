
@protocol UITable_RowDataSource <UITable>

@required

- (void)_applyContentSizeDeltaImmediately:(double)arg1;
- (void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
- (<UITableConstants> *)_constants;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInset;
- (double)_dataSourceHeightForFooterInSection:(long long)arg1;
- (double)_dataSourceHeightForHeaderInSection:(long long)arg1;
- (double)_dataSourceHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (double)_defaultSectionFooterHeight;
- (double)_defaultSectionHeaderHeight;
- (NSString *)_detailTextForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForFooterInSection:(long long)arg1;
- (double)_estimatedHeightForHeaderInSection:(long long)arg1;
- (double)_estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg1;
- (bool)_estimatesHeights;
- (bool)_estimatesRowHeights;
- (bool)_estimatesSectionFooterHeights;
- (bool)_estimatesSectionHeaderHeights;
- (double)_headerFooterLeadingMarginWidth;
- (long long)_headerFooterPinningBehavior;
- (double)_headerFooterTrailingMarginWidth;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (double)_heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (double)_heightForTableFooter;
- (double)_heightForTableHeader;
- (bool)_isTableHeaderAutohiding;
- (double)_maxTitleWidthForFooterInSection:(long long)arg1;
- (double)_maxTitleWidthForHeaderInSection:(long long)arg1;
- (double)_paddingAboveFirstSectionHeader;
- (double)_paddingAboveSectionHeaders;
- (void)_prepareForRowDataHeaderFooterSizing;
- (bool)_providesRowHeights;
- (double)_rowSpacing;
- (double)_sectionFooterToLastRowPadding;
- (double)_sectionHeaderToFirstRowPadding;
- (void)_setHeight:(double)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 usingPresentationValues:(bool)arg3;
- (bool)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
- (bool)_shouldUseNewHeaderFooterBehavior;
- (bool)_shouldUseSearchBarHeaderBehavior;
- (double)_sidePadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_tableContentInset;
- (UIView *)_tableFooterView;
- (UIView *)_tableHeaderView;
- (long long)_titleAlignmentForFooterInSection:(long long)arg1;
- (long long)_titleAlignmentForHeaderInSection:(long long)arg1;
- (NSString *)_titleForFooterInSection:(long long)arg1;
- (NSString *)_titleForHeaderInSection:(long long)arg1;

@optional

- (void)_configureTableHeaderFooterView:(UITableViewHeaderFooterView *)arg1 forHeader:(bool)arg2 section:(long long)arg3 floating:(bool)arg4 withTitle:(NSString *)arg5 detailText:(NSString *)arg6 textAlignment:(long long)arg7 fromClient:(bool)arg8;

@end
