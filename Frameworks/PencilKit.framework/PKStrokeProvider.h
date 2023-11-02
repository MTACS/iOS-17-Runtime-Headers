
@interface PKStrokeProvider : NSObject <CHStrokeProvider> {
    bool  _disabled;
    PKDrawing * _drawing;
    bool  _shouldProcessVisibleStrokes;
    NSMutableDictionary * _strokeIdsByEncoding;
    NSMutableOrderedSet * _strokeSlices;
    NSArray * _visibleOnscreenStrokes;
    long long  groupingPriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDrawing *drawing;
@property (readonly) struct CGSize { double x1; double x2; } drawingCanvasSize;
@property (readonly) long long groupingPriority;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *orderedStrokes;
@property (readonly) <CHStrokeProviderVersion> *strokeProviderVersion;
@property (readonly) Class superclass;
@property (readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;

+ (id)_identifiersForStrokes:(id)arg1;
+ (id)slicesForStrokes:(id)arg1;

- (void).cxx_destruct;
- (void)_cacheStrokeIdentifier:(id)arg1 withEncodedStrokeIdentifier:(id)arg2;
- (id)_cachedStrokeIdentifier:(id)arg1;
- (long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;
- (long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
- (id)description;
- (id)drawing;
- (struct CGSize { double x1; double x2; })drawingCanvasSize;
- (id)encodedStrokeIdentifier:(id)arg1;
- (bool)enumerateChangesSinceVersion:(id)arg1 usingBlock:(id /* block */)arg2;
- (long long)groupingPriority;
- (id)initWithDrawing:(id)arg1;
- (id)initWithDrawing:(id)arg1 visibleOnscreenStrokes:(id)arg2 shouldProcessVisibleStrokes:(bool)arg3;
- (bool)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
- (id)orderedStrokes;
- (id)sliceForIdentifier:(id)arg1;
- (id)slices;
- (id)strokeForIdentifier:(id)arg1;
- (id)strokeIdentifierFromData:(id)arg1;
- (id)strokeProviderVersion;
- (id)visibleStrokeEncodedIdentifiers;

@end
