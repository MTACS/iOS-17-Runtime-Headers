
@protocol HKOverlaySleepRoomContextChangeDelegate

@required

- (bool)baseDisplayIsSchedule;
- (bool)comparisonContextSelected;
- (bool)durationContextSelected;
- (bool)scheduleContextSelected;
- (void)setBaseDisplayIsSchedule:(bool)arg1;
- (void)setComparisonContextSelected:(bool)arg1;
- (void)setDurationContextSelected:(bool)arg1;
- (void)setScheduleContextSelected:(bool)arg1;
- (void)setShouldHighlightBaseDisplayContext:(bool)arg1;
- (void)setStageDurationContextSelected:(bool)arg1;
- (void)setStagePercentageContextSelected:(bool)arg1;
- (void)setStagePercentageContextWillBeSelected:(bool)arg1;
- (bool)shouldHighlightBaseDisplayContext;
- (bool)stageDurationContextSelected;
- (bool)stagePercentageContextSelected;
- (bool)stagePercentageContextWillBeSelected;

@end
