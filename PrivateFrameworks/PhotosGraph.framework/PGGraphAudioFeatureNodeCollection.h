
@interface PGGraphAudioFeatureNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (readonly) Class superclass;

+ (id)audioFeatureNodesForLabel:(id)arg1 inGraph:(id)arg2;
+ (id)audioFeatureNodesForLabels:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)featureNodeCollection;
- (id)momentNodes;

@end
