
@interface PGUpNextMemoryBasedMatchingInfo : PGUpNextMomentCollectionBasedMatchingInfo <PGUpNextMatchingTarget> {
    PGGraphFeatureNodeCollection * _memoryFeatureNodes;
    PGGraphMemoryNodeCollection * _memoryNodeAsCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTripMemory;
@property (nonatomic, readonly) PGGraphMeaningNodeCollection *meaningNodes;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (nonatomic, readonly) PGGraphMemoryNodeCollection *memoryNodeAsCollection;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) unsigned long long nodeIdentifier;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) CLLocation *representativeLocation;
@property (nonatomic, readonly) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly) Class superclass;

+ (id)matchingInfosWithMemoryNodes:(id)arg1;

- (void).cxx_destruct;
- (bool)_implIsTripMemory;
- (id)debugInfo;
- (id)initWithMemoryNodeAsCollection:(id)arg1;
- (id)initWithMemoryNodeAsCollection:(id)arg1 momentNodes:(id)arg2;
- (id)initWithMemoryNodeAsCollection:(id)arg1 momentNodes:(id)arg2 personNodes:(id)arg3 sceneNodes:(id)arg4 meaningNodes:(id)arg5 isTripMemory:(bool)arg6 representativeLocation:(id)arg7 representativeDate:(id)arg8 memoryFeatureNodes:(id)arg9;
- (id)memoryFeatureNodes;
- (id)memoryNodeAsCollection;
- (unsigned long long)nodeIdentifier;

@end
