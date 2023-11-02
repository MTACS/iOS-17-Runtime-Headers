
@interface PKDrawingVersionedDocument : PKVersionedDocument {
    PKDrawingConcrete * _drawing;
    Class  _drawingClass;
    bool  _loadNonInkingStrokes;
}

@property (nonatomic, retain) PKDrawingConcrete *drawing;
@property (nonatomic, retain) Class drawingClass;
@property (nonatomic) bool loadNonInkingStrokes;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)drawing;
- (Class)drawingClass;
- (id)initWithDrawing:(id)arg1;
- (id)initWithDrawingClass:(Class)arg1;
- (bool)loadNonInkingStrokes;
- (bool)loadUnzippedData:(id)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setDrawing:(id)arg1;
- (void)setDrawingClass:(Class)arg1;
- (void)setLoadNonInkingStrokes:(bool)arg1;

@end
