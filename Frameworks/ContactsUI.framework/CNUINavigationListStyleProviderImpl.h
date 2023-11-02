
@interface CNUINavigationListStyleProviderImpl : NSObject <CNUINavigationListStyle>

@property (nonatomic, readonly) UIColor *actionIconFillColor;
@property (nonatomic, readonly) UIColor *actionIconFillHighlightedColor;
@property (nonatomic, readonly) UIColor *cellBackgroundColor;
@property (nonatomic, readonly) UIColor *cellBackgroundExpandedColor;
@property (nonatomic, readonly) UIColor *cellBackgroundHighlightedColor;
@property (nonatomic, readonly) double cellContentViewBottomAnchorConstraintConstant;
@property (nonatomic, readonly) UIFont *cellSubtitleFont;
@property (nonatomic, readonly) double cellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) UIColor *cellSubtitleTextColor;
@property (nonatomic, readonly) UIColor *cellSubtitleTextHighlightedColor;
@property (nonatomic, readonly) UIFont *cellTitleFont;
@property (nonatomic, readonly) double cellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) UIColor *cellTitleTextColor;
@property (nonatomic, readonly) UIColor *cellTitleTextHighlightedColor;
@property (nonatomic, readonly) double cellUserActionLeftMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double detailCellContentViewBottomAnchorConstraintConstant;
@property (nonatomic, readonly) UIFont *detailCellSubtitleFont;
@property (nonatomic, readonly) double detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) UIColor *detailCellSubtitleTextColor;
@property (nonatomic, readonly) UIColor *detailCellSubtitleTextHighlightedColor;
@property (nonatomic, readonly) UIFont *detailCellTitleFont;
@property (nonatomic, readonly) double detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
@property (nonatomic, readonly) UIColor *detailCellTitleTextColor;
@property (nonatomic, readonly) UIColor *detailCellTitleTextHighlightedColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showCellSeparator;
@property (readonly) Class superclass;

- (id)actionIconFillColor;
- (id)actionIconFillHighlightedColor;
- (id)cellBackgroundColor;
- (id)cellBackgroundExpandedColor;
- (id)cellBackgroundHighlightedColor;
- (double)cellContentViewBottomAnchorConstraintConstant;
- (id)cellSubtitleFont;
- (double)cellSubtitleLabelFirstBaselineAnchorConstraintConstant;
- (id)cellSubtitleTextColor;
- (id)cellSubtitleTextHighlightedColor;
- (id)cellTitleFont;
- (double)cellTitleLabelFirstBaselineAnchorConstraintConstant;
- (id)cellTitleTextColor;
- (id)cellTitleTextHighlightedColor;
- (double)cellUserActionLeftMargin;
- (double)detailCellContentViewBottomAnchorConstraintConstant;
- (id)detailCellSubtitleFont;
- (double)detailCellSubtitleLabelFirstBaselineAnchorConstraintConstant;
- (id)detailCellSubtitleTextColor;
- (id)detailCellSubtitleTextHighlightedColor;
- (id)detailCellTitleFont;
- (double)detailCellTitleLabelFirstBaselineAnchorConstraintConstant;
- (id)detailCellTitleTextColor;
- (id)detailCellTitleTextHighlightedColor;
- (bool)showCellSeparator;

@end
