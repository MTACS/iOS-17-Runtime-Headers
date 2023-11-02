
@interface DBIconListPageControl : SBIconListPageControl {
    bool  _showsButtons;
}

@property (nonatomic) bool showsButtons;

- (double)_indicatorSpacing;
- (double)defaultHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setShowsButtons:(bool)arg1;
- (bool)showsButtons;
- (void)traitCollectionDidChange:(id)arg1;

@end
