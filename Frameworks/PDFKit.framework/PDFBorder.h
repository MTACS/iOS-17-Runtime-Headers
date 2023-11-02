
@interface PDFBorder : NSObject <NSCoding, NSCopying> {
    PDFBorderPrivateVars * _private;
}

@property (nonatomic, readonly, copy) NSDictionary *borderKeyValues;
@property (nonatomic, copy) NSArray *dashPattern;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (bool)_isRectangular;
- (void)_setDashFromArray:(struct CGPDFArray { }*)arg1;
- (void)_setStyleFromDictionary:(struct CGPDFDictionary { }*)arg1;
- (void)_updateDashPatternRaw;
- (id)borderKeyValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CFDictionary { }*)createDictionaryRef;
- (unsigned int)dashCountRaw;
- (id)dashPattern;
- (const double*)dashPatternRaw;
- (void)dealloc;
- (id)description;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (double)horizontalCornerRadius;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (double)lineWidth;
- (void)setAnnotation:(id)arg1;
- (bool)setBorderCharacteristicsFromArray:(struct CGPDFArray { }*)arg1;
- (void)setDashPattern:(id)arg1;
- (void)setHorizontalCornerRadius:(double)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStyle:(long long)arg1;
- (void)setVerticalCornerRadius:(double)arg1;
- (long long)style;
- (void)updateCornerBorderStyle;
- (double)verticalCornerRadius;

@end
