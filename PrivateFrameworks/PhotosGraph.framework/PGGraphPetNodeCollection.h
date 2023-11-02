
@interface PGGraphPetNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *localIdentifiers;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) NSSet *names;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *ownerNodes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *uuids;

+ (Class)nodeClass;
+ (id)petNodesForLocalIdentifier:(id)arg1 inGraph:(id)arg2;
+ (id)petNodesForLocalIdentifiers:(id)arg1 inGraph:(id)arg2;
+ (id)petNodesForSpecies:(unsigned long long)arg1 inGraph:(id)arg2;

- (id)featureNodeCollection;
- (id)localIdentifiers;
- (id)momentNodes;
- (id)names;
- (id)ownerNodes;
- (id)uuids;

@end
