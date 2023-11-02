
@interface _HKCardioFitnessLevelDataSourceDelegate : NSObject <HKDateRangeDataSourceDelegate> {
    HKDisplayType * _baseDisplayType;
    long long  _biologicalSex;
    long long  _cardioFitnessLevel;
    NSDateComponents * _dateOfBirthComponents;
    HKUnit * _unit;
}

@property (nonatomic, retain) HKDisplayType *baseDisplayType;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long cardioFitnessLevel;
@property (nonatomic, retain) NSDateComponents *dateOfBirthComponents;
@property (nonatomic, retain) HKUnit *unit;

- (void).cxx_destruct;
- (id)baseDisplayType;
- (long long)biologicalSex;
- (long long)cardioFitnessLevel;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)dateOfBirthComponents;
- (id)initWithCardioFitnessLevel:(long long)arg1 healthStore:(id)arg2 baseDisplayType:(id)arg3;
- (void)setBaseDisplayType:(id)arg1;
- (void)setBiologicalSex:(long long)arg1;
- (void)setCardioFitnessLevel:(long long)arg1;
- (void)setDateOfBirthComponents:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (id)unit;

@end
