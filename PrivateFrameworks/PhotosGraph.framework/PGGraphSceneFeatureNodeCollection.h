
@interface PGGraphSceneFeatureNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (readonly) Class superclass;

+ (Class)nodeClass;
+ (id)sceneFeatureNodesForSceneName:(id)arg1 inGraph:(id)arg2;
+ (id)sceneFeatureNodesForSceneNames:(id)arg1 inGraph:(id)arg2;

- (id)featureNodeCollection;
- (id)momentNodes;

@end
