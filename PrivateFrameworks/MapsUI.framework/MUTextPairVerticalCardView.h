
@interface MUTextPairVerticalCardView : MUPlaceVerticalCardContainerView {
    NSArray * _viewModels;
}

@property (nonatomic, retain) NSArray *viewModels;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_recalculateStackingIfNeeded;
- (void)_updateAppearance;
- (void)_updateInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setViewModels:(id)arg1;
- (id)viewModels;

@end
