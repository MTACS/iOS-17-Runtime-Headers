
@interface PGGraphMobilityEdge : PGGraphOptimizedEdge <MAUniquelyIdentifiableEdge> {
    double  _confidence;
}

@property (readonly) double confidence;
@property (nonatomic, readonly) MAEdgeFilter *uniquelyIdentifyingFilter;

+ (id)filter;

- (double)confidence;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toMobilityNode:(id)arg2 confidence:(double)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (id)propertyDictionary;
- (id)uniquelyIdentifyingFilter;

@end
