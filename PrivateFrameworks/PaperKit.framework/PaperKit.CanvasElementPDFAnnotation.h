
@interface PaperKit.CanvasElementPDFAnnotation : PDFAnnotation {
    void _akAnnotation;
    void _interactiveBackgroundColor;
    void containerBounds;
    void render;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  subelementId;
    void writePaperKitAnnotation;
    void writingAKAnnotation;
}

- (void).cxx_destruct;
- (void)_addAKAnnotationToDictionary:(struct __CFDictionary { }*)arg1;
- (id)akAnnotation;
- (Class)annotationSubclassForPopup;
- (id)copyWithZone:(void*)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (id)initCommonWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithAnnotationDictionary:(void*)arg1 forPage:(id)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forType:(id)arg2 withProperties:(id)arg3;
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation { }*)arg1 forPage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)interactiveBackgroundColor;
- (void)setIsFullyConstructed:(bool)arg1;

@end
