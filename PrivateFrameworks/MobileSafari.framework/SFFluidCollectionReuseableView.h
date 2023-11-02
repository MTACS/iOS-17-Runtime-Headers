
@interface SFFluidCollectionReuseableView : UIView {
    UIView * _contentView;
    bool  _highlighted;
    SFFluidCollectionViewLayoutAttributes * _lastAppliedLayoutAttributes;
    NSString * _reuseIdentifier;
    bool  _selected;
}

@property (nonatomic, readonly) UIView *contentView;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=_lastAppliedLayoutAttributes, nonatomic, readonly) SFFluidCollectionViewLayoutAttributes *lastAppliedLayoutAttributes;
@property (nonatomic, copy) NSString *reuseIdentifier;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_applyLayoutAttributes:(id)arg1;
- (id)_lastAppliedLayoutAttributes;
- (void)applyLayoutAttributes:(id)arg1;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)pulse;
- (id)reuseIdentifier;
- (void)setHighlighted:(bool)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
