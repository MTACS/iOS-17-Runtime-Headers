
@interface ATXExtraordinaryEventsDataSource : NSObject {
    ATXHeuristicDevice * _device;
    PPEventStore * _extraordinaryEventStore;
}

+ (id)_endOfDayAfterDate:(id)arg1 numberOfDays:(long long)arg2;

- (void).cxx_destruct;
- (id)_ekEventForHighlight:(id)arg1 eventStore:(id)arg2;
- (id)_fetchExtraordinaryEvents;
- (void)getEventsWithProminentFeature:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithDevice:(id)arg1;

@end
