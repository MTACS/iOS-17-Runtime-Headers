
@interface HKHearingLevelSummary : NSObject {
    HKHearingLevelMetrics * _leftEarMetrics;
    HKHearingLevelMetrics * _overallMetrics;
    HKHearingLevelMetrics * _rightEarMetrics;
}

@property (nonatomic, readonly, copy) HKHearingLevelMetrics *leftEarMetrics;
@property (nonatomic, readonly, copy) HKHearingLevelMetrics *overallMetrics;
@property (nonatomic, readonly, copy) HKHearingLevelMetrics *rightEarMetrics;

+ (id)summaryForAudiogramSample:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLeftEarMetrics:(id)arg1 rightEarMetrics:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)leftEarMetrics;
- (id)overallMetrics;
- (id)rightEarMetrics;

@end
