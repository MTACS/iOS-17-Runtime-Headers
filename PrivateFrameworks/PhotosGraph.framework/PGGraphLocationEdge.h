
@interface PGGraphLocationEdge : PGGraphPropertylessEdge <MAUniquelyIdentifiableEdge>

@property (nonatomic, readonly) MAEdgeFilter *uniquelyIdentifyingFilter;

+ (id)filter;

- (id)uniquelyIdentifyingFilter;

@end
