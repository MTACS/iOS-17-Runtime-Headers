
@interface HKSHGoalProgressEngine : NSObject {
    HKHealthStore * _healthStore;
}

+ (id)_computeStandardDeviationFor:(id)arg1;
+ (id)_dateComponentsForInterval:(double)arg1 sinceDate:(id)arg2 calendar:(id)arg3;
+ (id)_firstAsleepSegment:(id)arg1;
+ (id)_firstInBedSegment:(id)arg1;
+ (id)_firstSegmentMatchingSleepValues:(id)arg1 inPeriods:(id)arg2;
+ (id)_lastAsleepSegment:(id)arg1;
+ (id)_lastInBedSegment:(id)arg1;
+ (id)_lastSegmentMatchingSleepValues:(id)arg1 inPeriods:(id)arg2;
+ (double)_timeIntervalForDate:(id)arg1 sinceDate:(id)arg2 calendar:(id)arg3;
+ (id)goalProgressForDaySummaries:(id)arg1;
+ (id)goalProgressForDaySummaries:(id)arg1 inMorningIndexRange:(struct { long long x1; long long x2; })arg2;

- (void).cxx_destruct;
- (void)fetchGoalProgressForMorningIndexRange:(struct { long long x1; long long x2; })arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;

@end
