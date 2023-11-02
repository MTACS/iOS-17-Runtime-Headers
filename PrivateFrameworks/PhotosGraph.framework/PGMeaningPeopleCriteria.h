
@interface PGMeaningPeopleCriteria : NSObject <PGMeaningCriteria> {
    unsigned long long  _minimumNumberOfPeople;
    bool  _requiresChildPresence;
    bool  _requiresPartnerPresence;
    bool  _requiresPetPresence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long minimumNumberOfPeople;
@property (nonatomic) bool requiresChildPresence;
@property (nonatomic) bool requiresPartnerPresence;
@property (nonatomic) bool requiresPetPresence;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (id)description;
- (bool)isValid;
- (unsigned long long)minimumNumberOfPeople;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (bool)requiresChildPresence;
- (bool)requiresPartnerPresence;
- (bool)requiresPetPresence;
- (void)setMinimumNumberOfPeople:(unsigned long long)arg1;
- (void)setRequiresChildPresence:(bool)arg1;
- (void)setRequiresPartnerPresence:(bool)arg1;
- (void)setRequiresPetPresence:(bool)arg1;

@end
