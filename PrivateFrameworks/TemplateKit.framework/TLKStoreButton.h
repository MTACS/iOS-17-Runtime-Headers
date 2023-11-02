
@interface TLKStoreButton : UIButton {
    UIView * _backgroundView;
    TLKProminenceView * _highlightView;
    bool  _isEmphasized;
    TLKLabel * _label;
    TLKRichText * _richTitle;
    bool  _useCompactMode;
}

@property (retain) UIView *backgroundView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, copy) UIFont *font;
@property (retain) TLKProminenceView *highlightView;
@property bool isEmphasized;
@property (retain) TLKLabel *label;
@property (nonatomic, copy) TLKRichText *richTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool useCompactMode;

- (void).cxx_destruct;
- (id)backgroundView;
- (double)cornerRadius;
- (void)didMoveToWindow;
- (id)font;
- (id)highlightView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEmphasized;
- (id)label;
- (void)layoutSubviews;
- (id)richTitle;
- (void)setBackgroundView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsEmphasized:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setRichTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseCompactMode:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactMode;

@end
