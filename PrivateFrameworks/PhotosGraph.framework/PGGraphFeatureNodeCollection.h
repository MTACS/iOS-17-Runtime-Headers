
@interface PGGraphFeatureNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) NSSet *featureIdentifiers;
@property (nonatomic, readonly) PGGraphMemoryNodeCollection *memoryNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;

+ (id)featureNodeCollectionWithCollection:(id)arg1;
+ (id)featureNodeCollectionWithFeatures:(id)arg1 inGraph:(id)arg2;
+ (id)memoryOfFeature;
+ (id)momentOfFeature;

- (id)allFeatures;
- (id)featureIdentifiers;
- (id)memoryNodes;
- (id)momentNodes;

@end
