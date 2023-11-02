
@interface _UIBarCustomizationReservoirCell : UICollectionViewCell {
    _UIBarCustomizationChiclet * _chiclet;
}

@property (nonatomic, retain) _UIBarCustomizationChiclet *chiclet;

- (void).cxx_destruct;
- (id)chiclet;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setChiclet:(id)arg1;

@end
