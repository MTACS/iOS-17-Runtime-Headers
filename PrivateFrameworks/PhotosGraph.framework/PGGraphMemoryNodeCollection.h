
@interface PGGraphMemoryNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodes;
@property (nonatomic, readonly) NSArray *memoryCategorySubcategories;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) NSSet *uniqueMemoryIdentifiers;

+ (id)memoryNodeAsCollectionWithUniqueIdentifier:(id)arg1 inGraph:(id)arg2;
+ (id)memoryNodesOfCategories:(id)arg1 inGraph:(id)arg2;
+ (id)memoryNodesOfCategory:(unsigned long long)arg1 inGraph:(id)arg2;
+ (id)memoryNodesWithUniqueIdentifierArray:(id)arg1 inGraph:(id)arg2;
+ (id)memoryNodesWithUniqueIdentifiers:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (void)enumerateMemoryCategorySubcategoriesUsingBlock:(id /* block */)arg1;
- (id)featureNodes;
- (id)memoryCategorySubcategories;
- (id)momentNodes;
- (id)subsetWithMemoryCategories:(id)arg1;
- (id)subsetWithMemoryCategory:(unsigned long long)arg1;
- (id)uniqueMemoryIdentifiers;

@end
