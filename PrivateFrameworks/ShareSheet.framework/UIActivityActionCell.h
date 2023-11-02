
@interface UIActivityActionCell : _UICollectionViewListCell {
    bool  _disabled;
    UIVisualEffectView * _effectView;
    UIView * _fillView;
}

@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic, retain) UIView *fillView;

- (void).cxx_destruct;
- (id)effectView;
- (id)fillView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (void)prepareForReuse;
- (void)setDisabled:(bool)arg1;
- (void)setEffectView:(id)arg1;
- (void)setFillView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
