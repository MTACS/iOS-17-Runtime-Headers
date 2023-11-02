
@protocol CHStrokeProvider <NSObject>

@required

- (long long)compareOrderOfStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg1 toStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg2;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg1 toStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg2;
- (CHEncodedStrokeIdentifier *)encodedStrokeIdentifier:(id <CHStrokeIdentifier>)arg1;
- (long long)groupingPriority;
- (NSArray *)orderedStrokes;
- (<CHStroke> *)strokeForIdentifier:(id <CHStrokeIdentifier>)arg1;
- (<CHStrokeIdentifier> *)strokeIdentifierFromData:(CHEncodedStrokeIdentifier *)arg1;
- (<CHStrokeProviderVersion> *)strokeProviderVersion;

@optional

- (long long)compareOrderOfStroke:(id <CHStroke>)arg1 toStroke:(id <CHStroke>)arg2;
- (struct CGSize { double x1; double x2; })drawingCanvasSize;
- (bool)isStroke:(id <CHStroke>)arg1 versionOfStrokeWithIdentifier:(id <CHStrokeIdentifier>)arg2;
- (NSOrderedSet *)visibleStrokeEncodedIdentifiers;

@end
