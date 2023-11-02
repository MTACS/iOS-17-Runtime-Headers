
@interface TLKSelectableGridButton : UIButton {
    TLKLabel * _bottomLabel;
    bool  _customHighlight;
    TLKStackView * _stackView;
    TLKLabel * _topLabel;
}

@property (nonatomic, retain) TLKLabel *bottomLabel;
@property (nonatomic) bool customHighlight;
@property (nonatomic, retain) TLKStackView *stackView;
@property (nonatomic, retain) TLKLabel *topLabel;

+ (id)selectableGridButton;

- (void).cxx_destruct;
- (id)bottomLabel;
- (bool)customHighlight;
- (void)didMoveToWindow;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBottomLabel:(id)arg1;
- (void)setCustomHighlight:(bool)arg1;
- (void)setStackView:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setTopLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)topLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
