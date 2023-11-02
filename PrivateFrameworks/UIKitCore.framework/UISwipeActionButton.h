
@interface UISwipeActionButton : UIButton {
    bool  _autosizes;
    UIView * _backgroundView;
    UIColor * _defaultBackgroundColor;
    UIColor * _highlightedBackgroundColor;
    <_UISwipeActionButtonDelegate> * _swipeActionButtonDelegate;
    <UISwipeActionVisualStyle> * _visualStyle;
}

@property (nonatomic) bool autosizes;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) double buttonWidth;
@property (nonatomic, retain) UIColor *defaultBackgroundColor;
@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic) <_UISwipeActionButtonDelegate> *swipeActionButtonDelegate;
@property (nonatomic, retain) <UISwipeActionVisualStyle> *visualStyle;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_allowableContentRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;
- (bool)_heightDemandsCompactLayout;
- (double)_horizontalPaddingForCurrentIdiom;
- (double)_maxFontSizeForCurrentIdiom;
- (double)_minFontSizeForCurrentIdiom;
- (double)_minScaleFactorForFont:(id)arg1;
- (long long)_numberOfLinesForTitle:(id)arg1;
- (double)_titleFontWeightForCurrentIdiom;
- (bool)autosizes;
- (id)backgroundView;
- (double)buttonWidth;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)defaultBackgroundColor;
- (double)defaultButtonWidth;
- (id)highlightedBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAutosizes:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDefaultBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setSwipeActionButtonDelegate:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setVisualStyle:(id)arg1;
- (id)sourceView;
- (id)swipeActionButtonDelegate;
- (id)titleFont;
- (id)titleFontOfSize:(double)arg1;
- (id)visualStyle;

@end
