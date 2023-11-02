
@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (void)_updateNoteLayer;
- (id)annotation;
- (void)removeFromSuperlayer;
- (void)update;

@end
