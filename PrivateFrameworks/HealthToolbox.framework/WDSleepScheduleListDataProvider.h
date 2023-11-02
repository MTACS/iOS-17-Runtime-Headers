
@interface WDSleepScheduleListDataProvider : WDSampleListDataProvider {
    NSCalendar * _gregorianCalender;
    NSDateFormatter * _listItemFormatter;
    NSDateFormatter * _standaloneFormatter;
}

- (void).cxx_destruct;
- (long long)cellStyle;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (unsigned long long)numberOfSections;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(bool*)arg3;
- (id)sampleTypes;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;

@end
