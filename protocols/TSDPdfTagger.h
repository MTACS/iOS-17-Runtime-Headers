
@protocol TSDPdfTagger <TSKPdfTagger>

@required

- (void)beginFreehandDrawing:(TSDFreehandDrawingRep *)arg1;
- (void)beginObject:(TSDRep *)arg1;
- (void)beginPencilAnnotation:(id <TSKPencilAnnotationStorage>)arg1;
- (void)endFreehandDrawing:(TSDFreehandDrawingRep *)arg1;
- (void)endObject:(TSDRep *)arg1;
- (void)endPencilAnnotation:(id <TSKPencilAnnotationStorage>)arg1;

@end
