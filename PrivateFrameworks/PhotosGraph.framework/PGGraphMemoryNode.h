
@interface PGGraphMemoryNode : PGGraphOptimizedNode <PGMemoryNodeProtocol> {
    bool  _generatedWithFallbackRequirements;
    NSString * _label;
    unsigned long long  _memoryCategorySubcategory;
    NSString * _uniqueMemoryIdentifier;
}

@property (nonatomic, readonly) PGGraphMemoryNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool generatedWithFallbackRequirements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long memoryCategory;
@property (nonatomic, readonly) unsigned long long memoryCategorySubcategory;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueMemoryIdentifier;

+ (id)allMemoryTypeStrings;
+ (id)featureOfMemory;
+ (id)filter;
+ (id)filterWithMemoryCategories:(id)arg1;
+ (id)filterWithMemoryCategory:(unsigned long long)arg1;
+ (id)filterWithUniqueMemoryIdentifier:(id)arg1;
+ (id)filterWithUniqueMemoryIdentifierArray:(id)arg1;
+ (id)filterWithUniqueMemoryIdentifiers:(id)arg1;
+ (id)fullMemoryTypeStringWithMemoryCategorySubcategory:(unsigned long long)arg1 featureNodes:(id)arg2;
+ (id)fullyQualifiedMemoryTypeForMemoryType:(id)arg1 withPrefix:(id)arg2;
+ (id)momentOfMemory;
+ (id)uniqueMemoryIdentifierWithMemoryLabel:(id)arg1 featureNodes:(id)arg2;

- (void).cxx_destruct;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (bool)generatedWithFallbackRequirements;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithLabel:(id)arg1 memoryCategorySubcategory:(unsigned long long)arg2 uniqueMemoryIdentifier:(id)arg3;
- (id)initWithLabel:(id)arg1 memoryCategorySubcategory:(unsigned long long)arg2 uniqueMemoryIdentifier:(id)arg3 generatedWithFallbackRequirements:(bool)arg4;
- (id)label;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodes;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (id)memoryMomentNodes;
- (id)propertyDictionary;
- (id)uniqueMemoryIdentifier;

@end
