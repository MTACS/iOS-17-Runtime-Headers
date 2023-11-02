
@protocol GEOFactoid <NSObject>

@required

- (bool)canBeDisplayedInPlaceSummary;
- (GEOColor *)color;
- (GEOMapItemIdentifier *)placeIdentifier;
- (int)semantic;
- (bool)shouldUseStructuredData;
- (NSString *)symbolName;
- (NSString *)title;
- (int)unitType;
- (NSString *)unstructuredValue;
- (double)value;

@end
