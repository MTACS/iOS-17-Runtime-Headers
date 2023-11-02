
@interface PGMemoryOptions : NSObject {
    NSDate * _baseMemoryCreationUniversalDate;
    NSSet * _blockedFeatures;
    NSArray * _blockedMemories;
    NSArray * _existingMemories;
    NSArray * _existingSuggestions;
    NSDictionary * _extraParameters;
    double  _forcedBeta;
    NSDate * _lastMemoryCreationUniversalDate;
    CLLocation * _location;
    NSArray * _peopleNames;
    unsigned long long  _randomSeed;
    unsigned long long  _reason;
    NSDate * _universalDate;
}

@property (nonatomic, retain) NSDate *baseMemoryCreationUniversalDate;
@property (nonatomic, retain) NSSet *blockedFeatures;
@property (nonatomic, retain) NSArray *blockedMemories;
@property (nonatomic, retain) NSArray *existingMemories;
@property (nonatomic, retain) NSArray *existingSuggestions;
@property (nonatomic, retain) NSDictionary *extraParameters;
@property (nonatomic) double forcedBeta;
@property (nonatomic, retain) NSDate *lastMemoryCreationUniversalDate;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, retain) NSArray *peopleNames;
@property (nonatomic) unsigned long long randomSeed;
@property unsigned long long reason;
@property (nonatomic, retain) NSDate *universalDate;

+ (id)stringForReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)baseMemoryCreationUniversalDate;
- (id)blockedFeatures;
- (id)blockedMemories;
- (id)description;
- (id)existingMemories;
- (id)existingSuggestions;
- (id)extraParameters;
- (double)forcedBeta;
- (id)initWithReason:(unsigned long long)arg1 universalDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4;
- (id)lastMemoryCreationUniversalDate;
- (id)location;
- (id)peopleNames;
- (unsigned long long)randomSeed;
- (unsigned long long)reason;
- (void)setBaseMemoryCreationUniversalDate:(id)arg1;
- (void)setBlockedFeatures:(id)arg1;
- (void)setBlockedMemories:(id)arg1;
- (void)setExistingMemories:(id)arg1;
- (void)setExistingSuggestions:(id)arg1;
- (void)setExtraParameters:(id)arg1;
- (void)setForcedBeta:(double)arg1;
- (void)setLastMemoryCreationUniversalDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setPeopleNames:(id)arg1;
- (void)setRandomSeed:(unsigned long long)arg1;
- (void)setReason:(unsigned long long)arg1;
- (void)setUniversalDate:(id)arg1;
- (id)universalDate;

@end
