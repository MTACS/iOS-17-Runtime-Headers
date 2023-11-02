
@interface PGGraphPublicEventNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) PGGraphBusinessNodeCollection *businessNodes;
@property (nonatomic, readonly) PGGraphPublicEventCategoryNodeCollection *categoryNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *eventNames;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphPerformerNodeCollection *performerNodes;
@property (readonly) Class superclass;

+ (Class)nodeClass;
+ (id)publicEventNodesWithCategories:(id)arg1 inGraph:(id)arg2;

- (id)businessNodes;
- (id)categoryNodes;
- (id)eventNames;
- (id)featureNodeCollection;
- (id)momentNodes;
- (id)performerNodes;

@end
