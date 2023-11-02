
@interface PGGraphAreaEdge : PGGraphOptimizedEdge <MAUniquelyIdentifiableEdge> {
    double  _relevance;
}

@property (readonly) double relevance;
@property (nonatomic, readonly) MAEdgeFilter *uniquelyIdentifyingFilter;

+ (id)filter;

- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromAddressNode:(id)arg1 toAreaNode:(id)arg2 relevance:(double)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (id)propertyDictionary;
- (double)relevance;
- (id)uniquelyIdentifyingFilter;

@end
