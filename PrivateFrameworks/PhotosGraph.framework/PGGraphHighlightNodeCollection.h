
@interface PGGraphHighlightNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection, PGGraphEventCollection, PGGraphScenedEventCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphHighlightGroupNodeCollection *highlightGroupNodes;
@property (nonatomic, readonly) NSSet *localIdentifiers;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphHighlightNodeCollection *subsetWithBothPrivateAndSharedAssets;
@property (nonatomic, readonly) PGGraphHighlightNodeCollection *subsetWithPrivateAssets;
@property (nonatomic, readonly) PGGraphHighlightNodeCollection *subsetWithSharedAssets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *uuids;

+ (id)dayHighlightNodesInGraph:(id)arg1;
+ (id)highlightNodeAsCollectionByHighlightUUIDForArrayOfHighlightUUIDs:(id)arg1 inGraph:(id)arg2;
+ (id)highlightNodeAsCollectionByHighlightUUIDForHighlightUUIDs:(id)arg1 inGraph:(id)arg2;
+ (id)highlightNodeForUUID:(id)arg1 inGraph:(id)arg2;
+ (id)highlightNodesForArrayOfUUIDs:(id)arg1 inGraph:(id)arg2;
+ (id)highlightNodesForUUIDs:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (void)enumerateUUIDs:(id /* block */)arg1;
- (id)eventMomentNodes;
- (id)featureNodeCollection;
- (id)highConfidenceSceneNodes;
- (id)highlightGroupNodes;
- (id)highlightNodeAsCollectionByHighlightUUID;
- (id)highlightNodeByHighlightUUID;
- (id)localIdentifiers;
- (id)momentNodes;
- (id)sceneNodes;
- (id)searchConfidenceSceneNodes;
- (id)subsetWithBothPrivateAndSharedAssets;
- (id)subsetWithPrivateAssets;
- (id)subsetWithSharedAssets;
- (id)uuids;

@end
