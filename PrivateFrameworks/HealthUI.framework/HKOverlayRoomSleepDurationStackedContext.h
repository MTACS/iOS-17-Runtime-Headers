
@interface HKOverlayRoomSleepDurationStackedContext : HKOverlayRoomStackedContext {
    NSNumber * _firstWeekdayOverride;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) NSNumber *firstWeekdayOverride;
@property (nonatomic, retain) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_generateNamedDataSourceWithTemplateDisplayType:(id)arg1 overlayChartController:(id)arg2 applicationItems:(id)arg3;
- (id)_generateSleepDurationStackedDisplayTypeWithApplicationItems:(id)arg1 overlayChartController:(id)arg2 sleepChartFormatter:(id)arg3;
- (id)_generateSleepSeriesWithTemplateDisplayType:(id)arg1 applicationItems:(id)arg2;
- (id)firstWeekdayOverride;
- (id)initWithApplicationItems:(id)arg1 overlayChartController:(id)arg2 sleepChartFormatter:(id)arg3 primaryDisplayType:(id)arg4 uniqueIdentifier:(id)arg5 firstWeekdayOverride:(id)arg6 currentCalendarOverride:(id)arg7 isInfoButtonHidden:(bool)arg8;
- (id)initWithApplicationItems:(id)arg1 overlayChartController:(id)arg2 sleepChartFormatter:(id)arg3 primarySampleType:(id)arg4 uniqueIdentifier:(id)arg5 firstWeekdayOverride:(id)arg6 currentCalendarOverride:(id)arg7 isInfoButtonHidden:(bool)arg8;
- (void)setFirstWeekdayOverride:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
