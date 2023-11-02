
@interface VUIBaseCollectionViewCell : UICollectionViewCell <VUICollectionCellEventIntercepting> {
    UIColor * _backgroundColor;
    bool  _beingDisplayed;
    UIColor * _highlightedBackgroundColor;
    UIView * _preview;
    bool  _shouldAppearSelected;
    <VUICollectionViewCellInteractor> * _vuiCollectionViewCellInteractor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (getter=isBeingDisplayed, nonatomic) bool beingDisplayed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, retain) UIView *preview;
@property (nonatomic) bool shouldAppearSelected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } vuiBounds;
@property (nonatomic, readonly) UIView *vuiCellView;
@property (nonatomic) <VUICollectionViewCellInteractor> *vuiCollectionViewCellInteractor;
@property (nonatomic, readonly) UIView *vuiContentView;
@property (nonatomic, readonly) CALayer *vuiLayer;

- (void).cxx_destruct;
- (id)backgroundColor;
- (void)didEndDisplaying;
- (void)didSelect;
- (id)highlightedBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBeingDisplayed;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)preview;
- (void)setBackgroundColor:(id)arg1;
- (void)setBeingDisplayed:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setShouldAppearSelected:(bool)arg1;
- (void)setVuiCollectionViewCellInteractor:(id)arg1;
- (void)setupPreview;
- (bool)shouldAppearSelected;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vuiBounds;
- (id)vuiCellView;
- (id)vuiCollectionViewCellInteractor;
- (id)vuiContentView;
- (id)vuiLayer;
- (bool)vui_addSubview:(id)arg1 oldView:(id)arg2;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellDidSelect;
- (void)vui_cellWillBeDisplayed;
- (bool)vui_highlighted;
- (void)vui_layoutIfNeeded;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_prepareForReuse;
- (bool)vui_selected;
- (void)vui_setHighlighted:(bool)arg1;
- (void)vui_setNeedsLayout;
- (void)vui_setSelected:(bool)arg1;
- (void)vui_setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (struct CGSize { double x1; double x2; })vui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)willBeDisplayed;

@end
