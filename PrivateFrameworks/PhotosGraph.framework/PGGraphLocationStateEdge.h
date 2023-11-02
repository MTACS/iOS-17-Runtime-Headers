
@interface PGGraphLocationStateEdge : PGGraphLocationEdge

+ (id)filter;

- (unsigned short)domain;
- (id)initFromLocationNode:(id)arg1 toStateNode:(id)arg2;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;

@end
