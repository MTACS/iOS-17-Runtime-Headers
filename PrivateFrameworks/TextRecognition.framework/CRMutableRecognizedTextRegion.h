
@interface CRMutableRecognizedTextRegion : CRRecognizedTextRegion

@property double activationProbability;
@property (retain) CRNormalizedQuad *boundingQuad;
@property (retain) NSArray *candidates;
@property double confidence;
@property bool isCurved;
@property unsigned long long layoutDirection;
@property (retain) NSString *locale;
@property (retain) CRNormalizedPolyline *polygon;
@property (retain) NSArray *subregions;
@property (retain) NSString *text;
@property unsigned long long textRegionType;
@property bool whitespaceInjected;

- (void)adjustBoundsBasedOnSubregions;

@end
