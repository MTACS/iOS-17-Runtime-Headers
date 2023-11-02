
@interface PGGraphSceneEdge : PGGraphOptimizedEdge {
    double  _confidence;
    unsigned int  _isReliable;
    unsigned int  _numberOfAssets;
    unsigned int  _numberOfDominantSceneAssets;
    unsigned int  _numberOfHighConfidenceAssets;
    unsigned int  _numberOfSearchConfidenceAssets;
}

@property (readonly) double confidence;
@property (nonatomic, readonly) bool isReliable;
@property (nonatomic, readonly) bool isSearchableForEvent;
@property (readonly) PGGraphMomentNode *momentNode;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfDominantSceneAssets;
@property (nonatomic, readonly) unsigned long long numberOfHighConfidenceAssets;
@property (nonatomic, readonly) unsigned long long numberOfSearchConfidenceAssets;
@property (readonly) PGGraphSceneNode *sceneNode;

+ (id)dominantSceneAssetsFilter;
+ (id)filter;
+ (id)filterWithMinimumConfidence:(double)arg1;
+ (id)filterWithMinimumNumberOfHighConfidenceAssets:(unsigned long long)arg1;
+ (id)highConfidenceAssetsFilter;
+ (id)isReliableFilter;
+ (id)searchConfidenceAssetsFilter;
+ (void)setConfidence:(double)arg1 onSceneEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;

- (double)confidence;
- (id)debugDescription;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toSceneNode:(id)arg2 confidence:(double)arg3 isReliable:(bool)arg4 numberOfAssets:(unsigned long long)arg5 numberOfHighConfidenceAssets:(unsigned long long)arg6 numberOfSearchConfidenceAssets:(unsigned long long)arg7 numberOfDominantSceneAssets:(unsigned long long)arg8;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (bool)isReliable;
- (bool)isSearchableForEvent;
- (id)label;
- (id)momentNode;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfDominantSceneAssets;
- (unsigned long long)numberOfHighConfidenceAssets;
- (unsigned long long)numberOfSearchConfidenceAssets;
- (id)propertyDictionary;
- (id)sceneNode;

@end
