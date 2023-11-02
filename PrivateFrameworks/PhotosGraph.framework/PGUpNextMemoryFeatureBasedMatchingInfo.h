
@interface PGUpNextMemoryFeatureBasedMatchingInfo : NSObject <PGUpNextMatchingTarget> {
    bool  _isTripMemory;
    bool  _isTripMemoryIsResolved;
    PGGraphFeatureNodeCollection * _memoryFeatureNodes;
    PGGraphMemoryNodeCollection * _memoryNodeAsCollection;
    PGGraphPersonNodeCollection * _personNodes;
    PGGraphSceneNodeCollection * _sceneNodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugInfo;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTripMemory;
@property (nonatomic, readonly) PGGraphMeaningNodeCollection *meaningNodes;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) unsigned long long nodeIdentifier;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *personNodes;
@property (nonatomic, readonly) NSDate *representativeDate;
@property (nonatomic, readonly) CLLocation *representativeLocation;
@property (nonatomic, readonly) PGGraphSceneNodeCollection *sceneNodes;
@property (readonly) Class superclass;

+ (id)matchingInfosWithMemoryNodes:(id)arg1;
+ (id)representativeSceneNodesForMemoryFeatureNodes:(id)arg1;

- (void).cxx_destruct;
- (id)debugInfo;
- (id)initWithMemoryNodeAsCollection:(id)arg1;
- (bool)isTripMemory;
- (id)meaningNodes;
- (id)memoryFeatureNodes;
- (id)momentNodes;
- (unsigned long long)nodeIdentifier;
- (id)personNodes;
- (id)representativeDate;
- (id)representativeLocation;
- (id)sceneNodes;

@end
