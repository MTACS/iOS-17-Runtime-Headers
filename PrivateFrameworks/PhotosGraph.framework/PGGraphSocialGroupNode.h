
@interface PGGraphSocialGroupNode : PGGraphOptimizedNode <PGAssetCollectionFeature> {
    double  _importance;
    NSNumber * _uuid;
}

@property (nonatomic, readonly) PGGraphSocialGroupNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) double importance;
@property (nonatomic, readonly) bool isFrequentSocialGroup;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly) unsigned long long numberOfPersonNodes;
@property (nonatomic, readonly) NSSet *personNodes;
@property (readonly) long long socialGroupID;
@property (nonatomic, readonly) NSString *socialGroupName;
@property (nonatomic, readonly) NSArray *sortedPersonNodes;
@property (readonly) Class superclass;

+ (id)filter;
+ (id)filterWithSocialGroupIdentifier:(long long)arg1;
+ (long long)identifierForPersonNodes:(id)arg1;
+ (id)importanceSortDescriptors;
+ (id)momentOfSocialGroup;
+ (id)personOfSocialGroup;

- (void).cxx_destruct;
- (id)UUID;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (void)enumeratePersonEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePersonNodesUsingBlock:(id /* block */)arg1;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (double)importance;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithSocialGroupIdentifier:(long long)arg1 importance:(double)arg2;
- (bool)isFrequentSocialGroup;
- (id)label;
- (unsigned long long)numberOfMomentNodes;
- (unsigned long long)numberOfPersonNodes;
- (id)personNodes;
- (id)propertyDictionary;
- (unsigned long long)rankInGraph:(id)arg1;
- (long long)socialGroupID;
- (id)socialGroupName;
- (id)sortedPersonNodes;

@end
