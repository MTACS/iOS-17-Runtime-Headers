
@interface PGGraphSceneNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphLocalizable, PGGraphSynonymSupport> {
    bool  _isIndexed;
    NSString * _label;
    unsigned int  _level;
    NSString * _localizedName;
    NSString * _localizedSynonyms;
    unsigned int  _sceneIdentifier;
}

@property (nonatomic, readonly) PGGraphSceneNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIndexed;
@property (nonatomic, readonly) bool isSuitableForSuggestions;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfDominantSceneAssets;
@property (nonatomic, readonly) unsigned long long numberOfHighConfidenceAssets;
@property (nonatomic, readonly) unsigned long long numberOfSearchConfidenceAssets;
@property (nonatomic, readonly) unsigned int sceneIdentifier;
@property (nonatomic, readonly) NSString *sceneName;
@property (readonly) Class superclass;

+ (id)filter;
+ (id)filterForSceneName:(id)arg1;
+ (id)filterForSceneNames:(id)arg1;
+ (id)filterWithSceneIdentifiers:(id)arg1;
+ (id)momentOfReliableScene;
+ (id)momentOfScene;
+ (id)momentOfSceneWithDominantSceneAssets;
+ (id)momentOfSceneWithHighConfidenceAssets;
+ (id)momentOfSceneWithSearchConfidenceAssets;
+ (id)suggestableSceneNames;

- (void).cxx_destruct;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initForTestingWithSceneName:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithSceneName:(id)arg1 sceneIdentifier:(unsigned int)arg2 level:(unsigned long long)arg3 isIndexed:(bool)arg4 localizedName:(id)arg5 localizedSynonyms:(id)arg6;
- (id)initWithSceneTaxonomyNode:(id)arg1 level:(unsigned long long)arg2;
- (bool)isIndexed;
- (bool)isSuitableForSuggestions;
- (id)label;
- (unsigned long long)level;
- (id)localizedName;
- (id)localizedSynonyms;
- (id)momentNodes;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfDominantSceneAssets;
- (unsigned long long)numberOfHighConfidenceAssets;
- (unsigned long long)numberOfSearchConfidenceAssets;
- (id)propertyDictionary;
- (unsigned int)sceneIdentifier;
- (id)sceneName;

@end
