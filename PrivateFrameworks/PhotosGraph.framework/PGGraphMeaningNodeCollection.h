
@interface PGGraphMeaningNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphMeaningNodeCollection *childMeaningNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphMeaningNodeCollection *parentMeaningNodes;
@property (nonatomic, readonly) PGGraphMeaningEdgeCollection *reliableMeaningEdges;
@property (readonly) Class superclass;

+ (id)meaningNodesWithMeaning:(unsigned long long)arg1 inGraph:(id)arg2;
+ (id)meaningNodesWithMeaningLabels:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)childMeaningNodes;
- (id)featureNodeCollection;
- (id)meaningLabels;
- (id)momentNodes;
- (id)parentMeaningNodes;
- (id)reliableMeaningEdges;

@end
