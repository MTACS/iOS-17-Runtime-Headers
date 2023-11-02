
@interface PGGraphPersonActivityMeaningEdge : PGGraphPropertylessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)arg1 toPersonActivityMeaningNode:(id)arg2;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;
- (id)meaningLabel;

@end
