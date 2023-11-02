
@interface CKPhotosSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell {
    UISegmentedControl * _control;
    double  _controlBottomPadding;
    double  _controlTopPadding;
}

@property (nonatomic, retain) UISegmentedControl *control;
@property (nonatomic) double controlBottomPadding;
@property (nonatomic) double controlTopPadding;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (void)_controlIndexDidChange:(id)arg1;
- (id)control;
- (double)controlBottomPadding;
- (double)controlTopPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setControl:(id)arg1;
- (void)setControlBottomPadding:(double)arg1;
- (void)setControlTopPadding:(double)arg1;
- (void)setTitle:(id)arg1;
- (void)updateSegmentedControlToFitWidth:(double)arg1;

@end
