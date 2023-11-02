
@interface GEOCombinedFactoid : NSObject <GEOFactoid> {
    <GEOFactoid> * _iconFactoid;
    <GEOFactoid> * _labelFactoid;
}

@property (nonatomic, readonly) bool canBeDisplayedInPlaceSummary;
@property (nonatomic, readonly) GEOColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapItemIdentifier *placeIdentifier;
@property (nonatomic, readonly) int semantic;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) int unitType;
@property (nonatomic, readonly) NSString *unstructuredValue;
@property (getter=shouldUseStructuredData, nonatomic, readonly) bool useStructuredData;
@property (nonatomic, readonly) double value;

- (void).cxx_destruct;
- (bool)canBeDisplayedInPlaceSummary;
- (id)color;
- (id)initWithLabelFactoid:(id)arg1 iconFactoid:(id)arg2;
- (id)placeIdentifier;
- (int)semantic;
- (bool)shouldUseStructuredData;
- (id)symbolName;
- (id)title;
- (int)unitType;
- (id)unstructuredValue;
- (double)value;

@end
