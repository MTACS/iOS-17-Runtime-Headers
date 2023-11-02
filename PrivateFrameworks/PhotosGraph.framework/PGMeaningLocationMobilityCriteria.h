
@interface PGMeaningLocationMobilityCriteria : NSObject <PGMeaningCriteria> {
    NSString * _locationMobilityLabel;
    unsigned long long  _locationMobilityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *locationMobilityLabel;
@property (nonatomic) unsigned long long locationMobilityType;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)isValid;
- (id)locationMobilityLabel;
- (unsigned long long)locationMobilityType;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (void)setLocationMobilityLabel:(id)arg1;
- (void)setLocationMobilityType:(unsigned long long)arg1;

@end
