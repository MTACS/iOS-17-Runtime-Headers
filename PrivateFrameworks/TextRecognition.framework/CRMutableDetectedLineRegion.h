
@interface CRMutableDetectedLineRegion : CRDetectedLineRegion

@property (retain) CRNormalizedQuad *boundingQuad;
@property bool isCurved;
@property unsigned long long layoutDirection;
@property unsigned long long nmsOutputScale;
@property (retain) CRNormalizedPolyline *polygon;
@property (retain) NSDictionary *scriptCategoryCounts;
@property (retain) NSArray *scriptCategoryResults;
@property (retain) NSString *sequenceScriptOutputResult;
@property bool shouldRunSequenceOrientation;
@property bool shouldRunSequenceScript;
@property unsigned long long textType;
@property (retain) NSObject<CRScriptCategory> *topScriptCategory;
@property (retain) NSUUID *uuid;

- (void)rotate180;

@end
