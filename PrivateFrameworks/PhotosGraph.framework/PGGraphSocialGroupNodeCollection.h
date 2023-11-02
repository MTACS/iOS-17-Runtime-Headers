
@interface PGGraphSocialGroupNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (readonly) Class superclass;

+ (Class)nodeClass;
+ (id)socialGroupNodeForSocialGroupIdentifier:(long long)arg1 inGraph:(id)arg2;

- (void)enumerateImportancesUsingBlock:(id /* block */)arg1;
- (void)enumerateSocialGroupIdentifiersUsingBlock:(id /* block */)arg1;
- (id)featureNodeCollection;
- (id)momentNodes;
- (id)personNodes;

@end
