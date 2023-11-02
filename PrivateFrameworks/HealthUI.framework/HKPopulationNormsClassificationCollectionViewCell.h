
@interface HKPopulationNormsClassificationCollectionViewCell : UICollectionViewCell {
    UILabel * _classificationLabel;
    UIColor * _highlightColor;
    bool  _isHighlighted;
}

@property (nonatomic, retain) UILabel *classificationLabel;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic) bool isHighlighted;

- (void).cxx_destruct;
- (void)_setupFonts;
- (id)classificationLabel;
- (id)highlightColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setClassificationLabel:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setIsHighlighted:(bool)arg1;
- (void)setSoftHighlightState:(bool)arg1;
- (void)setTitle:(id)arg1 classificationIdentifier:(id)arg2 highlighted:(bool)arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end
