
@interface PKStackedLeadingTrailingLabelCell : UICollectionViewListCell {
    UILabel * _detailLabel;
    NSString * _detailText;
    UILabel * _leadingPrimaryLabel;
    NSString * _leadingPrimaryText;
    UILabel * _leadingSecondaryLabel;
    NSString * _leadingSecondaryText;
    double  _progress;
    PKProgressBar * _progressBar;
    UIColor * _progressBarEndColor;
    UIColor * _progressBarStartColor;
    bool  _showProgressBar;
    UILabel * _trailingPrimaryLabel;
    NSString * _trailingPrimaryText;
    UILabel * _trailingSecondaryLabel;
    NSString * _trailingSecondaryText;
}

@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) NSString *leadingPrimaryText;
@property (nonatomic, copy) NSString *leadingSecondaryText;
@property (nonatomic) double progress;
@property (nonatomic, retain) UIColor *progressBarEndColor;
@property (nonatomic, retain) UIColor *progressBarStartColor;
@property (nonatomic) bool showProgressBar;
@property (nonatomic, copy) NSString *trailingPrimaryText;
@property (nonatomic, copy) NSString *trailingSecondaryText;

- (void).cxx_destruct;
- (double)_layoutLabelsSideBySide:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 allocated:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 unallocated:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 isTemplateLayout:(bool)arg4;
- (double)_layoutLabelsStacked:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 allocated:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 unallocated:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 isTemplateLayout:(bool)arg4;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_updateProgressBar;
- (id)detailText;
- (void)layoutSubviews;
- (id)leadingPrimaryText;
- (id)leadingSecondaryText;
- (void)prepareForReuse;
- (double)progress;
- (id)progressBarEndColor;
- (id)progressBarStartColor;
- (void)setDetailText:(id)arg1;
- (void)setLeadingPrimaryText:(id)arg1;
- (void)setLeadingSecondaryText:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressBarEndColor:(id)arg1;
- (void)setProgressBarStartColor:(id)arg1;
- (void)setShowProgressBar:(bool)arg1;
- (void)setTrailingPrimaryText:(id)arg1;
- (void)setTrailingSecondaryText:(id)arg1;
- (bool)showProgressBar;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)trailingPrimaryText;
- (id)trailingSecondaryText;

@end
