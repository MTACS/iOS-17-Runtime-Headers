
@interface PGGraphSceneNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *localizedSceneNames;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodesThroughReliableEdges;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodesWithDominantSceneAssets;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodesWithHighConfidenceAssets;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodesWithSearchConfidenceAssets;
@property (readonly) NSSet *sceneIdentifiers;
@property (readonly) NSSet *sceneNames;
@property (readonly) Class superclass;

+ (Class)nodeClass;
+ (id)sceneNodesForSceneIdentifiers:(id)arg1 inGraph:(id)arg2;
+ (id)sceneNodesForSceneName:(id)arg1 inGraph:(id)arg2;
+ (id)sceneNodesForSceneNames:(id)arg1 inGraph:(id)arg2;

- (id)featureNodeCollection;
- (id)localizedSceneNames;
- (id)momentNodes;
- (id)momentNodesThroughReliableEdges;
- (id)momentNodesWithDominantSceneAssets;
- (id)momentNodesWithHighConfidenceAssets;
- (id)momentNodesWithSearchConfidenceAssets;
- (id)sceneIdentifiers;
- (id)sceneNames;

@end
