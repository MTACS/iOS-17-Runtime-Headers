
@interface AMSFeatureFlagGroup : NSObject {
    NSMutableArray * _mutableFlags;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *flags;
@property (nonatomic, retain) NSMutableArray *mutableFlags;
@property (nonatomic, copy) NSString *name;

+ (id)_normalizedFlagGroupsFromFlagGroups:(id)arg1;
+ (id)allFlagGroups;
+ (id)allFlagGroupsIncludingHidden:(bool)arg1;
+ (id)allFlagGroupsIncludingHidden:(bool)arg1 searchDirectory:(id)arg2;
+ (bool)disableFlagGroupWithName:(id)arg1 error:(id*)arg2;
+ (bool)enableFlagGroupWithName:(id)arg1 error:(id*)arg2;
+ (id)fetchFlagGroupWithName:(id)arg1;
+ (id)flagGroupWithName:(id)arg1 includingHidden:(bool)arg2;
+ (id)groupsFromDomainData:(id)arg1 domain:(id)arg2;
+ (id)groupsFromDomainData:(id)arg1 domain:(id)arg2 mutableFeatures:(id)arg3 profileFeatures:(id)arg4 includesHidden:(bool)arg5;
+ (void)resetAllFlagGroups;
+ (bool)setFlagGroupWithName:(id)arg1 enabled:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_completedFlags;
- (id)_developmentFlags;
- (id)_groupKeyForDevelopmentPhase:(long long)arg1;
- (id)_groupKeyForType:(long long)arg1;
- (id)_testableFlags;
- (id)activateFlagsIfNeededForDevelopmentPhase:(long long)arg1;
- (id)activateFlagsIfNeededForType:(long long)arg1;
- (void)activateITFEs;
- (id)allITFEs;
- (void)appendFlag:(id)arg1;
- (id)completedFlags;
- (id)developmentFlags;
- (id)fetchAllGroupKeys;
- (id)flags;
- (id)flagsForDevelopmentPhase:(long long)arg1;
- (id)flagsForType:(long long)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 domain:(id)arg2;
- (bool)isDevelopmentPhaseEnabled:(long long)arg1;
- (bool)isGroupTypeEnabled:(long long)arg1;
- (id)mutableFlags;
- (id)name;
- (void)reset;
- (void)setFlagsForDevelopmentPhase:(long long)arg1 enabled:(bool)arg2;
- (void)setGroupType:(long long)arg1 enabled:(bool)arg2;
- (void)setMutableFlags:(id)arg1;
- (void)setName:(id)arg1;
- (id)testableFlags;

@end
