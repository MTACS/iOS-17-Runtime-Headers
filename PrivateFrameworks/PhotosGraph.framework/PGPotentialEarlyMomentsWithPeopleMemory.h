
@interface PGPotentialEarlyMomentsWithPeopleMemory : PGPotentialMemory {
    NSArray * _facedAssetLocalIdentifiers;
    NSSet * _personNodes;
}

@property (nonatomic, retain) NSArray *facedAssetLocalIdentifiers;
@property (nonatomic, readonly) NSSet *personNodes;

- (void).cxx_destruct;
- (id)facedAssetLocalIdentifiers;
- (id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (id)personNodes;
- (void)setFacedAssetLocalIdentifiers:(id)arg1;

@end
