
@interface PGGraphPOIEdge : PGGraphOptimizedEdge {
    double  _confidence;
    unsigned int  _poiIsImproved;
    unsigned int  _poiIsSpecial;
}

@property (readonly) double confidence;
@property (nonatomic, readonly) bool poiIsImproved;
@property (nonatomic, readonly) bool poiIsSpecial;

+ (id)filter;
+ (id)filterAboveConfidence:(double)arg1;
+ (id)filterAboveConfidence:(double)arg1 hasLegacyWeights:(bool)arg2;
+ (id)filterImproved;
+ (id)filterSpecial;
+ (void)setConfidence:(double)arg1 onPOIEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;
+ (void)setPOIIsImproved:(bool)arg1 onPOIEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;

- (double)confidence;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toPOINode:(id)arg2 confidence:(double)arg3 poiIsImproved:(bool)arg4 poiIsSpecial:(bool)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (bool)poiIsImproved;
- (bool)poiIsSpecial;
- (id)propertyDictionary;

@end
