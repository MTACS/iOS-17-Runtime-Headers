
@interface MUScrollableSegmentedPickerContentView : UIView <UIScrollViewDelegate> {
    UIVisualEffectView * _backgroundBlurView;
    MUScrollableStackView * _contentStackView;
    <MUScrollableSegmentedPickerContentViewDelegate> * _delegate;
    MUGradientView * _leadingGradientOverlayView;
    unsigned long long  _selectedIndex;
    UIVisualEffectView * _selectedPillView;
    MUGradientView * _trailingGradientOverlayView;
    NSArray * _viewModels;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUScrollableSegmentedPickerContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewModels;

- (void).cxx_destruct;
- (void)_handleTapWithSegmentView:(id)arg1;
- (void)_setSelectedIndex:(unsigned long long)arg1 animated:(bool)arg2 invokeDelegate:(bool)arg3;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateForContentSizeCategoryChange;
- (void)_updateGradientColors;
- (void)_updateGradientVisibility;
- (void)_updateSelectedIndexAnimated:(bool)arg1 invokeDelegate:(bool)arg2;
- (id)delegate;
- (double)idealWidthForProposedSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setViewModels:(id)arg1;
- (id)viewModels;

@end
