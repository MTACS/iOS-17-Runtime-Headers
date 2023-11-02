
@interface PLPlatterHeaderContentViewLayoutManager : NSObject {
    PLPlatterHeaderContentView * _headerContentView;
}

@property (nonatomic, readonly) double contentBaseline;
@property (getter=_date, nonatomic, readonly) NSDate *date;
@property (getter=_dateLabel, nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic, readonly) PLPlatterHeaderContentView *headerContentView;
@property (getter=_heedsHorizontalLayoutMargins, nonatomic, readonly) bool heedsHorizontalLayoutMargins;
@property (getter=_iconButtons, nonatomic, readonly) NSArray *iconButtons;
@property (getter=_layoutMargins, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (getter=_shouldReverseLayoutDirection, nonatomic, readonly) bool shouldReverseLayoutDirection;
@property (getter=_titleLabel, nonatomic, readonly) UILabel *titleLabel;
@property (getter=_utilityButton, nonatomic, readonly) UIButton *utilityButton;
@property (getter=_utilityView, nonatomic, readonly) UIView *utilityView;

+ (double)_headerHeightWithFont:(id)arg1 forWidth:(double)arg2;
+ (double)_titleLabelBaselineOffsetWithFont:(id)arg1;
+ (double)contentBaselineToBoundsBottomWithFont:(id)arg1 boundsWidth:(double)arg2 scale:(double)arg3;

- (void).cxx_destruct;
- (id)_date;
- (id)_dateLabel;
- (bool)_heedsHorizontalLayoutMargins;
- (id)_iconButtons;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_layoutMargins;
- (struct CGSize { double x1; double x2; })_measuringSizeForWidth:(double)arg1;
- (bool)_shouldReverseLayoutDirection;
- (id)_titleLabel;
- (double)_titleLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_titleLabelBoundsForSize:(struct CGSize { double x1; double x2; })arg1 withNumberOfLines:(double)arg2;
- (id)_utilityButton;
- (id)_utilityView;
- (double)contentBaseline;
- (id)headerContentView;
- (double)headerHeightForWidth:(double)arg1;
- (id)initWithPlatterHeaderContentView:(id)arg1;
- (void)invalidateCachedSizeInfo;
- (void)layoutDateLabelWithScale:(double)arg1;
- (void)layoutIconButtonsWithScale:(double)arg1;
- (void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2;
- (void)layoutUtilityButtonWithScale:(double)arg1;

@end
