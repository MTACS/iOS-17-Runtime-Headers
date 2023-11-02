
@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGAssetCollectionFeature, PGGraphLocalizable, PGGraphPortraitTopic, PGGraphSynonymSupport> {
    long long  _isVeryMeaningfulCachedValue;
    NSString * _label;
}

@property (nonatomic, readonly) PGGraphMeaningNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long isVeryMeaningfulCachedValue;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (readonly) PGGraphMeaningNode *parentMeaningNode;
@property (nonatomic, readonly) NSString *pg_topic;
@property (readonly) Class superclass;
@property (getter=isVeryMeaningful, nonatomic, readonly) bool veryMeaningful;

+ (id)childMeaningOfMeaning;
+ (id)eventOfMeaning;
+ (id)eventOfReliableMeaning;
+ (id)filter;
+ (id)filterWithMeaning:(unsigned long long)arg1;
+ (id)momentOfMeaning;
+ (id)momentOfReliableMeaning;
+ (id)parentMeaningOfMeaning;

- (void).cxx_destruct;
- (id)_localizationKeyForMeaningLabel:(id)arg1;
- (id)associatedNodesForRemoval;
- (id)collection;
- (unsigned short)domain;
- (void)enumerateMeaningfulEventsUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentAlternativeEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateSubmeaningsUsingBlock:(id /* block */)arg1;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (bool)isVeryMeaningful;
- (long long)isVeryMeaningfulCachedValue;
- (id)label;
- (id)localizedName;
- (id)localizedSynonyms;
- (id)parentMeaningNode;
- (id)pg_topic;
- (void)setIsVeryMeaningfulCachedValue:(long long)arg1;
- (void)traverseParentMeaningHierarchyUsingBlock:(id /* block */)arg1;
- (void)traverseSubmeaningHierarchyUsingBlock:(id /* block */)arg1;

@end
