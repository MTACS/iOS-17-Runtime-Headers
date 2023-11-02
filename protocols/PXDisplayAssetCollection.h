
@protocol PXDisplayAssetCollection <PXDisplayCollection>

@required

- (unsigned long long)estimatedAssetCount;
- (bool)isAggregation;
- (bool)isEnriched;
- (bool)isEnrichmentComplete;
- (bool)isRecent;
- (NSString *)localizedDateDescription;
- (NSString *)localizedDateDescriptionWithOptions:(unsigned long long)arg1;
- (NSString *)localizedDebugDescription;
- (NSArray *)localizedLocationNames;
- (NSString *)localizedSmartDescription;
- (NSString *)localizedSubtitle;
- (double)promotionScore;
- (unsigned short)px_highlightEnrichmentState;
- (long long)px_highlightKind;
- (NSString *)uuid;

@end
