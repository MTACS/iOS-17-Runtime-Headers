
@interface CPSAbridgableLabel : UILabel {
    NSArray * _attributedTextVariants;
    NSArray * _textVariants;
    bool  _useAttributedTextVariants;
    unsigned long long  _variantsIndex;
}

@property (nonatomic, copy) NSArray *attributedTextVariants;
@property (nonatomic, copy) NSArray *textVariants;
@property (nonatomic) bool useAttributedTextVariants;
@property (nonatomic) unsigned long long variantsIndex;

+ (id)sanitizedTextForText:(id)arg1;

- (void).cxx_destruct;
- (long long)_compareBoundsSizeToLayoutSizeForString:(id)arg1;
- (unsigned long long)_numberOfVariants;
- (void)_updateVariant;
- (id)_variantsList;
- (id)attributedTextVariants;
- (id)init;
- (id)sanitizedAttributedStringForString:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAttributedTextVariants:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextVariants:(id)arg1;
- (void)setUseAttributedTextVariants:(bool)arg1;
- (void)setVariantsIndex:(unsigned long long)arg1;
- (id)textVariants;
- (bool)useAttributedTextVariants;
- (unsigned long long)variantsIndex;

@end
