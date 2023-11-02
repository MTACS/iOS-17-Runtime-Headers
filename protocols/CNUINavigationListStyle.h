
@protocol CNUINavigationListStyle <NSObject>

@required

- (UIColor *)actionIconFillColor;
- (UIColor *)actionIconFillHighlightedColor;
- (UIColor *)cellBackgroundColor;
- (UIColor *)cellBackgroundExpandedColor;
- (UIColor *)cellBackgroundHighlightedColor;
- (double)cellContentViewBottomAnchorConstraintConstant;
- (UIFont *)cellSubtitleFont;
- (double)cellSubtitleLabelFirstBaselineAnchorConstraintConstant;
- (UIColor *)cellSubtitleTextColor;
- (UIColor *)cellSubtitleTextHighlightedColor;
- (UIFont *)cellTitleFont;
- (double)cellTitleLabelFirstBaselineAnchorConstraintConstant;
- (UIColor *)cellTitleTextColor;
- (UIColor *)cellTitleTextHighlightedColor;
- (double)cellUserActionLeftMargin;
- (double)detailCellContentViewBottomAnchorConstraintConstant;
- (UIFont *)detailCellSubtitleFont;
- (double)detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
- (UIColor *)detailCellSubtitleTextColor;
- (UIColor *)detailCellSubtitleTextHighlightedColor;
- (UIFont *)detailCellTitleFont;
- (double)detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
- (UIColor *)detailCellTitleTextColor;
- (UIColor *)detailCellTitleTextHighlightedColor;
- (bool)showCellSeparator;

@end
