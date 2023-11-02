
@interface PGPotentialPastSupersetMemory : PGPotentialMemory {
    PGGraphMomentNodeCollection * _interestingMomentNodes;
    NSDateInterval * _supersetDateInterval;
    PGGraphLocationNode * _supersetLocationNode;
    PGGraphLocationNodeCollection * _supersetLocationNodes;
}

@property (readonly) PGGraphMomentNodeCollection *interestingMomentNodes;
@property (readonly) NSDateInterval *supersetDateInterval;
@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (retain) PGGraphLocationNodeCollection *supersetLocationNodes;

- (void).cxx_destruct;
- (id)initWithSupersetLocationNode:(id)arg1 supersetDateInterval:(id)arg2 interestingMomentNodes:(id)arg3 momentNodes:(id)arg4;
- (id)interestingMomentNodes;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (void)setSupersetLocationNodes:(id)arg1;
- (id)supersetDateInterval;
- (id)supersetLocationNode;
- (id)supersetLocationNodes;

@end
