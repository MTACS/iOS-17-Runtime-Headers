
@interface PGGraphMomentFeaturesEdge : PGGraphOptimizedEdge {
    NSString * _allAssetUUIDs;
    unsigned int  _numberOfRelevantAssets;
}

+ (id)filter;
+ (id)relevantAssetUUIDsFromAllAssetUUIDs:(id)arg1;

- (void).cxx_destruct;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toFeatureNode:(id)arg2 numberOfRelevantAssets:(unsigned long long)arg3 allAssetUUIDs:(id)arg4;
- (id)initFromMomentNode:(id)arg1 toFeatureNode:(id)arg2 numberOfRelevantAssets:(unsigned long long)arg3 relevantAssetUUIDs:(id)arg4;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;
- (id)propertyDictionary;

@end
