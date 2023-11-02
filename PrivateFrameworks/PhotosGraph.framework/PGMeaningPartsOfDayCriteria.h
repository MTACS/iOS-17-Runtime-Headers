
@interface PGMeaningPartsOfDayCriteria : NSObject <PGMeaningCriteria> {
    NSArray * _negativePartsOfDay;
    NSArray * _negativePartsOfDayStrings;
    NSArray * _negativeSignificantPartsOfDay;
    NSArray * _negativeSignificantPartsOfDayStrings;
    NSArray * _positivePartsOfDay;
    NSArray * _positivePartsOfDayStrings;
    NSArray * _positiveSignificantPartsOfDay;
    NSArray * _positiveSignificantPartsOfDayStrings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *negativePartsOfDay;
@property (nonatomic, retain) NSArray *negativePartsOfDayStrings;
@property (nonatomic, retain) NSArray *negativeSignificantPartsOfDay;
@property (nonatomic, retain) NSArray *negativeSignificantPartsOfDayStrings;
@property (nonatomic, retain) NSArray *positivePartsOfDay;
@property (nonatomic, retain) NSArray *positivePartsOfDayStrings;
@property (nonatomic, retain) NSArray *positiveSignificantPartsOfDay;
@property (nonatomic, retain) NSArray *positiveSignificantPartsOfDayStrings;
@property (readonly) Class superclass;

+ (id)_partsOfDayAsNumbersFromStrings:(id)arg1;
+ (id)_partsOfDayNumbersByString;
+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)_passesPartsOfDayWithMomentNodePartsOfDay:(unsigned long long)arg1 positivePartsOfDay:(id)arg2 negativePartsOfDay:(id)arg3;
- (id)description;
- (bool)isValid;
- (id)negativePartsOfDay;
- (id)negativePartsOfDayStrings;
- (id)negativeSignificantPartsOfDay;
- (id)negativeSignificantPartsOfDayStrings;
- (bool)passesForAssets:(id)arg1;
- (bool)passesForMomentNode:(id)arg1 momentNodeCache:(id)arg2;
- (id)positivePartsOfDay;
- (id)positivePartsOfDayStrings;
- (id)positiveSignificantPartsOfDay;
- (id)positiveSignificantPartsOfDayStrings;
- (void)setNegativePartsOfDay:(id)arg1;
- (void)setNegativePartsOfDayStrings:(id)arg1;
- (void)setNegativeSignificantPartsOfDay:(id)arg1;
- (void)setNegativeSignificantPartsOfDayStrings:(id)arg1;
- (void)setPositivePartsOfDay:(id)arg1;
- (void)setPositivePartsOfDayStrings:(id)arg1;
- (void)setPositiveSignificantPartsOfDay:(id)arg1;
- (void)setPositiveSignificantPartsOfDayStrings:(id)arg1;

@end
