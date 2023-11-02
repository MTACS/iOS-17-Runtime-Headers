
@interface HKCardioFitnessLevelData : NSObject {
    long long  _ageLowerBound;
    long long  _ageUpperBound;
    long long  _biologicalSex;
    long long  _cardioFitnessLevel;
    double  _vo2MaxLowerBound;
    double  _vo2MaxUpperBound;
}

@property (nonatomic) long long ageLowerBound;
@property (nonatomic) long long ageUpperBound;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) long long cardioFitnessLevel;
@property (nonatomic) double vo2MaxLowerBound;
@property (nonatomic) double vo2MaxUpperBound;

- (long long)ageLowerBound;
- (long long)ageUpperBound;
- (long long)biologicalSex;
- (long long)cardioFitnessLevel;
- (id)description;
- (id)initWithCardioFitnessLevel:(long long)arg1 biologicalSex:(long long)arg2 ageLowerBound:(long long)arg3 ageUpperBound:(long long)arg4 vo2MaxLowerBound:(double)arg5 vo2MaxUpperBound:(double)arg6;
- (void)setAgeLowerBound:(long long)arg1;
- (void)setAgeUpperBound:(long long)arg1;
- (void)setBiologicalSex:(long long)arg1;
- (void)setCardioFitnessLevel:(long long)arg1;
- (void)setVo2MaxLowerBound:(double)arg1;
- (void)setVo2MaxUpperBound:(double)arg1;
- (double)vo2MaxLowerBound;
- (double)vo2MaxUpperBound;

@end
