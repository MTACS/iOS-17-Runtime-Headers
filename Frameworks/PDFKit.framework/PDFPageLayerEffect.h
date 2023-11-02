
@interface PDFPageLayerEffect : CALayer {
    PDFPageLayerEffectPrivate * _private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (void)addSelection:(id)arg1;
- (id)annotation;
- (id)initWithPDFPageLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pageFrame;
- (id)pdfResult;
- (void)setPageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelections:(id)arg1;
- (bool)shouldRotateContent;
- (void)update;
- (void)updateColor:(unsigned long long)arg1;

@end
