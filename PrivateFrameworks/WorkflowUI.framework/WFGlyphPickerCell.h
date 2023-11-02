
@interface WFGlyphPickerCell : UICollectionViewCell {
    WFGlyphView * _glyphView;
}

@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic) WFGlyphView *glyphView;
@property (nonatomic) bool outline;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (unsigned short)glyphCharacter;
- (id)glyphView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (bool)outline;
- (void)setGlyphCharacter:(unsigned short)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setOutline:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
