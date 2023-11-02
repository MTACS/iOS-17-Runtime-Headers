
@interface PGMeaningDurationCriteria : NSObject <PGMeaningCriteria> {
    bool  _includeRoutineVisitsInDuration;
    unsigned long long  _minimumDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeRoutineVisitsInDuration;
@property (nonatomic) unsigned long long minimumDuration;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (id)description;
- (bool)includeRoutineVisitsInDuration;
- (bool)isValid;
- (unsigned long long)minimumDuration;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (void)setIncludeRoutineVisitsInDuration:(bool)arg1;
- (void)setMinimumDuration:(unsigned long long)arg1;

@end
