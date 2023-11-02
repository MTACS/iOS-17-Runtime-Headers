
@interface HKCurrentActivityCacheQueryResult : NSObject <NSSecureCoding> {
    NSArray * _activeEnergyResults;
    NSArray * _appleExerciseTimeResults;
    NSArray * _appleMoveTimeResults;
    NSArray * _appleStandHourResults;
    HKActivityCache * _currentActivityCache;
}

@property (nonatomic, copy) NSArray *activeEnergyResults;
@property (nonatomic, copy) NSArray *appleExerciseTimeResults;
@property (nonatomic, copy) NSArray *appleMoveTimeResults;
@property (nonatomic, copy) NSArray *appleStandHourResults;
@property (nonatomic, retain) HKActivityCache *currentActivityCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeEnergyResults;
- (id)appleExerciseTimeResults;
- (id)appleMoveTimeResults;
- (id)appleStandHourResults;
- (id)currentActivityCache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActiveEnergyResults:(id)arg1;
- (void)setAppleExerciseTimeResults:(id)arg1;
- (void)setAppleMoveTimeResults:(id)arg1;
- (void)setAppleStandHourResults:(id)arg1;
- (void)setCurrentActivityCache:(id)arg1;

@end
