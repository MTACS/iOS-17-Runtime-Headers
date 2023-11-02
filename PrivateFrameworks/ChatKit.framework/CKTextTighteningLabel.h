
@interface CKTextTighteningLabel : UILabel {
    NSString * _managedText;
    NSAttributedString * _tightenedAttributedText;
    double  _tightenedAttributedTextBoundsWidth;
    NSAttributedString * _untightenedAttributedText;
    double  _untightenedAttributedTextBoundsWidth;
}

@property (nonatomic, copy) NSString *managedText;
@property (nonatomic, retain) NSAttributedString *tightenedAttributedText;
@property (nonatomic) double tightenedAttributedTextBoundsWidth;
@property (nonatomic, retain) NSAttributedString *untightenedAttributedText;
@property (nonatomic) double untightenedAttributedTextBoundsWidth;

+ (id)_attributedStringWithText:(id)arg1 font:(id)arg2 sizeCategory:(id)arg3 textRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 forFittingSize:(bool)arg5;
+ (void)applyKerning:(double)arg1 whitespaceKerning:(double)arg2 toAttributedString:(id)arg3;
+ (bool)attributedText:(id)arg1 fitsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (void).cxx_destruct;
- (id)_attributedTextForFittingSize:(bool)arg1 boundsSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_clearTextTighteningCaches;
- (void)_updateAttributedTextForFittingSize:(bool)arg1 boundsSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_updateTightenedAttributedText;
- (void)layoutSubviews;
- (id)managedText;
- (void)setFont:(id)arg1;
- (void)setManagedText:(id)arg1;
- (void)setTightenedAttributedText:(id)arg1;
- (void)setTightenedAttributedTextBoundsWidth:(double)arg1;
- (void)setUntightenedAttributedText:(id)arg1;
- (void)setUntightenedAttributedTextBoundsWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tightenedAttributedText;
- (double)tightenedAttributedTextBoundsWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (id)untightenedAttributedText;
- (double)untightenedAttributedTextBoundsWidth;

@end
