
@interface SBHAddWidgetSheetGalleryCollectionViewCell : UICollectionViewCell {
    UIView * _highlightView;
    SBHWidgetWrapperViewController * _widgetWrapperViewController;
}

@property (nonatomic, readonly) UILabel *debugLabel;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, retain) SBHWidgetWrapperViewController *widgetWrapperViewController;

- (void).cxx_destruct;
- (id)debugLabel;
- (id)highlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setWidgetWrapperViewController:(id)arg1;
- (id)widgetWrapperViewController;

@end
