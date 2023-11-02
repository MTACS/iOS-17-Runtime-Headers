
@interface _HKSPSleepEventTimelineAdjustment : NSObject {
    HKSPResolvedSleepScheduleOccurrence * _adjustedOccurrence;
    HKSPResolvedSleepScheduleOccurrence * _originalOccurrence;
}

@property (nonatomic, retain) HKSPResolvedSleepScheduleOccurrence *adjustedOccurrence;
@property (nonatomic, retain) HKSPResolvedSleepScheduleOccurrence *originalOccurrence;

- (void).cxx_destruct;
- (id)adjustedOccurrence;
- (id)originalOccurrence;
- (void)setAdjustedOccurrence:(id)arg1;
- (void)setOriginalOccurrence:(id)arg1;

@end
