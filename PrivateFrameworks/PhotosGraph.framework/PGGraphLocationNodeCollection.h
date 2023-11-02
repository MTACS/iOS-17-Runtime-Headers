
@interface PGGraphLocationNodeCollection : PGGraphNodeCollection <PGGraphLocationOrAreaNodeCollection>

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)nodeClass;

- (id)addressNodes;
- (id)childLocationNodes;
- (id)deepChildLocationNodes;
- (id)deepChildLocationNodesWithLabel:(id)arg1;
- (id)deepParentLocationNodes;
- (id)deepParentLocationNodesWithLabel:(id)arg1;
- (id)featureNodeCollection;
- (id)nearestDeepChildLocationNodesWithLabel:(id)arg1;
- (id)nearestDeepNeighborWithLabel:(id)arg1 usingOutEdges:(bool)arg2;
- (id)nearestDeepParentLocationNodesWithLabel:(id)arg1;
- (id)parentLocationNodes;

@end
