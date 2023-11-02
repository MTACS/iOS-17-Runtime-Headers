
@interface PGMeaningInterestingnessCriteria : NSObject <PGMeaningCriteria> {
    bool  _mustBeInteresting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mustBeInteresting;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (id)description;
- (bool)isValid;
- (bool)mustBeInteresting;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (void)setMustBeInteresting:(bool)arg1;

@end
