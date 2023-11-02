
@interface PDFAnnotationPKDrawing : PDFAnnotation {
    AKInkAnnotation * _akInkAnnotation;
    PKDrawing * _drawing;
}

@property (nonatomic, retain) PKDrawing *drawing;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)dictionaryRef;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (id)drawing;
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1 forPage:(id)arg2;
- (id)initWithPKDrawing:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setDrawing:(id)arg1;

@end
