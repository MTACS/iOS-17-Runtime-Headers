
@interface HKSPOverrideOccurrenceGenerationResult : NSObject {
    HKSPMutableSleepScheduleOccurrence * _overrideOccurrence;
    bool  _upcomingOccurrenceWasOverride;
    bool  _wasGeneratedFromTemplate;
}

@property (nonatomic, retain) HKSPMutableSleepScheduleOccurrence *overrideOccurrence;
@property (nonatomic) bool upcomingOccurrenceWasOverride;
@property (nonatomic) bool wasGeneratedFromTemplate;

- (void).cxx_destruct;
- (id)overrideOccurrence;
- (void)setOverrideOccurrence:(id)arg1;
- (void)setUpcomingOccurrenceWasOverride:(bool)arg1;
- (void)setWasGeneratedFromTemplate:(bool)arg1;
- (bool)upcomingOccurrenceWasOverride;
- (bool)wasGeneratedFromTemplate;

@end
