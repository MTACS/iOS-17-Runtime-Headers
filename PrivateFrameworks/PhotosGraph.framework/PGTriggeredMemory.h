
@interface PGTriggeredMemory : NSObject <PGTriggeredMemoryProtocol> {
    NSArray * _blockableFeatures;
    NSDate * _creationDate;
    double  _electionScore;
    bool  _generatedWithFallbackRequirements;
    unsigned long long  _memoryCategory;
    unsigned long long  _memoryCategorySubcategory;
    PGGraphFeatureNodeCollection * _memoryFeatureNodes;
    PGGraphMomentNodeCollection * _memoryMomentNodes;
    long long  _photosGraphVersion;
    NSIndexSet * _triggerTypes;
    NSString * _uniqueMemoryIdentifier;
    NSDictionary * _validityIntervalByTriggerType;
}

@property (nonatomic, retain) NSArray *blockableFeatures;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double electionScore;
@property (nonatomic, readonly) bool generatedWithFallbackRequirements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long memoryCategory;
@property (nonatomic, readonly) unsigned long long memoryCategorySubcategory;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (nonatomic, readonly) long long photosGraphVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSIndexSet *triggerTypes;
@property (nonatomic, readonly) NSString *uniqueMemoryIdentifier;
@property (nonatomic, readonly) NSDictionary *validityIntervalByTriggerType;

- (void).cxx_destruct;
- (id)blockableFeatures;
- (id)creationDate;
- (id)description;
- (double)electionScore;
- (bool)generatedWithFallbackRequirements;
- (id)initWithMemoryCategory:(unsigned long long)arg1 memoryCategorySubcategory:(unsigned long long)arg2 memoryMomentNodes:(id)arg3 memoryFeatureNodes:(id)arg4 validityIntervalByTriggerType:(id)arg5 creationDate:(id)arg6 uniqueMemoryIdentifier:(id)arg7 generatedWithFallbackRequirements:(bool)arg8;
- (id)initWithMemoryCategory:(unsigned long long)arg1 memoryCategorySubcategory:(unsigned long long)arg2 memoryMomentNodes:(id)arg3 memoryFeatureNodes:(id)arg4 validityIntervalByTriggerType:(id)arg5 creationDate:(id)arg6 uniqueMemoryIdentifier:(id)arg7 photosGraphVersion:(long long)arg8;
- (id)initWithMemoryCategory:(unsigned long long)arg1 memoryCategorySubcategory:(unsigned long long)arg2 memoryMomentNodes:(id)arg3 memoryFeatureNodes:(id)arg4 validityIntervalByTriggerType:(id)arg5 creationDate:(id)arg6 uniqueMemoryIdentifier:(id)arg7 photosGraphVersion:(long long)arg8 generatedWithFallbackRequirements:(bool)arg9;
- (id)initWithMemoryNode:(id)arg1 validityIntervalByTriggerType:(id)arg2 creationDate:(id)arg3;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategory;
- (id)memoryFeatureNodes;
- (id)memoryFeatureNodesInGraph:(id)arg1;
- (id)memoryMomentNodes;
- (long long)photosGraphVersion;
- (void)setBlockableFeatures:(id)arg1;
- (void)setElectionScore:(double)arg1;
- (id)triggerTypes;
- (id)uniqueMemoryIdentifier;
- (id)validityIntervalByTriggerType;

@end
