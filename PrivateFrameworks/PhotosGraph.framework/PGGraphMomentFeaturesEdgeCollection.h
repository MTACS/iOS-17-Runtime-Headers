
@interface PGGraphMomentFeaturesEdgeCollection : PGGraphEdgeCollection

@property (nonatomic, readonly) NSSet *allRelevantAssetLocalIdentifiers;
@property (nonatomic, readonly) NSSet *allRelevantAssetUUIDs;
@property (readonly) unsigned long long numberOfRelevantAssets;

+ (Class)edgeClass;
+ (id)momentFeaturesEdgesFromMomentNodes:(id)arg1 toFeatureNodes:(id)arg2;

- (id)allRelevantAssetLocalIdentifiers;
- (id)allRelevantAssetUUIDs;
- (unsigned long long)numberOfRelevantAssets;

@end
