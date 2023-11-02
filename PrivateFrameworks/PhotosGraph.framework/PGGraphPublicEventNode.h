
@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGAssetCollectionFeature, PGGraphPortraitNamedEntity> {
    long long  _expectedAttendance;
    unsigned long long  _muid;
    NSString * _name;
}

@property (nonatomic, readonly) PGGraphBusinessNode *businessNode;
@property (nonatomic, readonly) NSSet *categories;
@property (nonatomic, readonly) PGGraphPublicEventNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long expectedAttendance;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *localizedCategories;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, copy) NSSet *performers;
@property (nonatomic, readonly) PPNamedEntity *pg_namedEntity;
@property (nonatomic, readonly) NSSet *preciseLocalizedCategoryNames;
@property (readonly) Class superclass;

+ (id)businessOfPublicEvent;
+ (id)categoryOfPublicEvent;
+ (id)filter;
+ (id)momentOfPublicEvent;
+ (id)performerOfPublicEvent;
+ (id)unsupportedCategoriesForTitles;

- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (id)businessNode;
- (id)categories;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePerformerEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePerformerNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePublicEventCategoryEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(id /* block */)arg1;
- (long long)expectedAttendance;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithMUID:(unsigned long long)arg1 name:(id)arg2 expectedAttendance:(long long)arg3;
- (id)keywordDescription;
- (id)label;
- (id)localizedCategories;
- (unsigned long long)muid;
- (id)name;
- (id)performers;
- (id)pg_namedEntity;
- (id)preciseLocalizedCategoryNames;
- (id)propertyDictionary;

@end
