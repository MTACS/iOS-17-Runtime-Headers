
@interface PGGraphPersonActivityMeaningNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (readonly) Class superclass;

+ (Class)nodeClass;
+ (id)personActivityMeaningNodesForActivityLabel:(id)arg1 inGraph:(id)arg2;
+ (id)personActivityMeaningNodesForActivityLabel:(id)arg1 personLocalIdentifiers:(id)arg2 inGraph:(id)arg3;
+ (id)personActivityMeaningNodesForActivityLabels:(id)arg1 inGraph:(id)arg2;

- (id)featureNodeCollection;
- (id)momentNodes;
- (id)personActivityMeaningLabels;
- (id)personLocalIdentifiers;
- (id)personNodes;
- (id)subsetWithActivityLabels:(id)arg1;

@end
