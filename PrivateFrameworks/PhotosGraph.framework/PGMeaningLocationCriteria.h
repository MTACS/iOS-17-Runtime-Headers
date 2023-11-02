
@interface PGMeaningLocationCriteria : NSObject <PGMeaningCriteria> {
    bool  _excludeFrequentLocations;
    bool  _excludeHomeWorkLocations;
    bool  _includeFrequentLocations;
    bool  _includeHomeLocations;
    bool  _includeWorkLocations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool excludeFrequentLocations;
@property (nonatomic) bool excludeHomeWorkLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeFrequentLocations;
@property (nonatomic) bool includeHomeLocations;
@property (nonatomic) bool includeWorkLocations;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (id)description;
- (bool)excludeFrequentLocations;
- (bool)excludeHomeWorkLocations;
- (bool)includeFrequentLocations;
- (bool)includeHomeLocations;
- (bool)includeWorkLocations;
- (bool)isValid;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (void)setExcludeFrequentLocations:(bool)arg1;
- (void)setExcludeHomeWorkLocations:(bool)arg1;
- (void)setIncludeFrequentLocations:(bool)arg1;
- (void)setIncludeHomeLocations:(bool)arg1;
- (void)setIncludeWorkLocations:(bool)arg1;

@end
