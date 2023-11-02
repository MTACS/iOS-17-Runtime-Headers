
@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting> {
    PKDrawing * _drawing;
    NSOrderedSet * _externalElements;
    NSItemProvider * _externalElementsItemProvider;
    PKStroke * _lassoStroke;
    NSSet * _strokeIdentifiers;
    PKStrokeSelectionImage * _strokeImage;
    PKStrokeSelectionImage * _strokeImageWithHighlight;
    NSOrderedSet * _strokes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDrawing *drawing;
@property (nonatomic, copy) NSOrderedSet *externalElements;
@property (nonatomic, copy) NSItemProvider *externalElementsItemProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKStroke *lassoStroke;
@property (nonatomic, readonly) long long requiredContentVersion;
@property (nonatomic, readonly) NSSet *strokeIdentifiers;
@property (nonatomic, copy) PKStrokeSelectionImage *strokeImage;
@property (nonatomic, copy) PKStrokeSelectionImage *strokeImageWithHighlight;
@property (nonatomic, readonly) NSOrderedSet *strokes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 drawingClass:(Class)arg3 error:(id*)arg4;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)strokeSelectionFromData:(id)arg1;
+ (id)strokeSelectionFromData:(id)arg1 forDrawingClass:(Class)arg2;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)_newDrawingWithStrokes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsWithoutLasso;
- (bool)containsBitmapData;
- (id)description;
- (id)drawing;
- (id)externalElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })externalElementsBounds;
- (id)externalElementsItemProvider;
- (void)generateImageWithConfig:(id)arg1 fullSizeConfig:(id)arg2 selectionInteraction:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)imageDataForSelection;
- (id)initWithStrokes:(id)arg1 externalElements:(id)arg2 lassoStroke:(id)arg3 drawing:(id)arg4;
- (id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3;
- (id)lassoStroke;
- (id)legacyStrokeDataForSelection;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)newExternalElementsCGImageFromCGImage:(struct CGImage { }*)arg1 withConfig:(id)arg2 selectionInteraction:(id)arg3 renderImage:(bool)arg4 withCompletion:(id /* block */)arg5;
- (long long)requiredContentVersion;
- (void)setExternalElements:(id)arg1;
- (void)setExternalElementsItemProvider:(id)arg1;
- (void)setStrokeImage:(id)arg1;
- (void)setStrokeImageWithHighlight:(id)arg1;
- (id)strokeDataForSelection;
- (id)strokeIdentifiers;
- (id)strokeImage;
- (id)strokeImageWithHighlight;
- (id)strokes;
- (id)writableTypeIdentifiersForItemProvider;

@end
