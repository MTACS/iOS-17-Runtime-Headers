
@interface PGGraphMemory : NSObject <PGMemoryNodeProtocol> {
    bool  _generatedWithFallbackRequirements;
    unsigned long long  _memoryCategory;
    unsigned long long  _memoryCategorySubcategory;
    PGGraphFeatureNodeCollection * _memoryFeatureNodes;
    PGGraphMomentNodeCollection * _memoryMomentNodes;
}

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

- (void).cxx_destruct;
- (id)description;
- (bool)generatedWithFallbackRequirements;
- (id)initWithMemoryCategory:(unsigned long long)arg1 memoryCategorySubcategory:(unsigned long long)arg2 momentNodes:(id)arg3 featureNodes:(id)arg4;
- (id)initWithMemoryCategory:(unsigned long long)arg1 memoryCategorySubcategory:(unsigned long long)arg2 momentNodes:(id)arg3 featureNodes:(id)arg4 generatedWithFallbackRequirements:(bool)arg5;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodes;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (id)memoryMomentNodes;
- (id)uniqueMemoryIdentifier;

@end
