
@interface PGGraphHighlightGroupNode : PGGraphHighlightNode

@property (nonatomic, readonly) PGGraphHighlightGroupNodeCollection *collection;
@property (readonly) NSArray *highlightNodes;
@property (readonly) NSArray *sortedHighlightNodes;

+ (id)filter;
+ (id)filterWithUUIDs:(id)arg1;
+ (id)highlightOfHighlightGroup;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)momentInHighlight;
+ (id)pathFromMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (id)pathToMoment;
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;
+ (id)typeOfHighlightGroup;

- (id)collection;
- (void)enumerateHighlightEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateHighlightNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (unsigned long long)featureType;
- (id)highlightNodes;
- (bool)isAggregation;
- (bool)isLongTrip;
- (bool)isPartOfAggregation;
- (bool)isPartOfLongTrip;
- (bool)isPartOfShortTrip;
- (bool)isPartOfTrip;
- (bool)isShortTrip;
- (bool)isTrip;
- (id)label;
- (id)sortedHighlightNodes;

@end
