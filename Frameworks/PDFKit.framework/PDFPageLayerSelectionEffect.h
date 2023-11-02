
@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect

- (void)_generateRects;
- (void)addSelection:(id)arg1;
- (id)initWithPDFPageLayer:(id)arg1;
- (void)setSelections:(id)arg1;
- (void)update;
- (void)updateColor:(unsigned long long)arg1;

@end
