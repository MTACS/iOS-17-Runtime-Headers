
@interface PGGraphPublicEventCategoryNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport> {
    NSString * _label;
    NSString * _localizedName;
}

@property (nonatomic, readonly) PGGraphPublicEventCategoryNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (readonly) Class superclass;

+ (id)filter;
+ (id)filterWithCategories:(id)arg1;
+ (id)filterWithCategory:(id)arg1;
+ (id)publicEventOfCategory;

- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 localizedName:(id)arg2;
- (id)label;
- (id)localizedName;
- (id)localizedSynonyms;
- (id)propertyDictionary;

@end
