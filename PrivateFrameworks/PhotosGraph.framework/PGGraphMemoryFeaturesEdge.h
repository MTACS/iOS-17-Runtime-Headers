
@interface PGGraphMemoryFeaturesEdge : PGGraphPropertylessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)initFromMemoryNode:(id)arg1 toFeatureNode:(id)arg2;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;

@end
