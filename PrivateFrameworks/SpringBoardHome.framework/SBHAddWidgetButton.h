
@interface SBHAddWidgetButton : UIButton <UIPointerInteractionDelegate> {
    unsigned long long  _addWidgetSheetStyle;
    MTStylingProvidingSolidColorView * _backgroundView;
    double  _buttonCornerRadius;
    UIView * _highlightView;
}

@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic, retain) MTStylingProvidingSolidColorView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addSymbolImage;
- (double)_buttonCornerRadius;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)_titleLabelFont;
- (unsigned long long)addWidgetSheetStyle;
- (id)backgroundView;
- (void)dealloc;
- (id)highlightView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)mt_applyVisualStyling:(id)arg1;
- (void)mt_removeAllVisualStyling;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setAddWidgetSheetStyle:(unsigned long long)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
