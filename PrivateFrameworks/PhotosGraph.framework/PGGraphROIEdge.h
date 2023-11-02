
@interface PGGraphROIEdge : PGGraphOptimizedEdge {
    double  _confidence;
}

@property (readonly) double confidence;

+ (id)filter;
+ (id)filterAboveConfidence:(double)arg1;
+ (id)filterAboveConfidence:(double)arg1 hasLegacyWeights:(bool)arg2;

- (double)confidence;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toROINode:(id)arg2 confidence:(double)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (id)propertyDictionary;

@end
