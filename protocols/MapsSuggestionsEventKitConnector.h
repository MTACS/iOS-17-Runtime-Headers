
@protocol MapsSuggestionsEventKitConnector <MapsSuggestionsObject>

@required

- (NSArray *)calendarsForEntityType:(unsigned long long)arg1;
- (<MapsSuggestionsEventKitConnectorDelegate> *)delegate;
- (EKEvent *)eventWithIdentifier:(NSString *)arg1;
- (NSArray *)eventsMatchingPredicate:(NSPredicate *)arg1;
- (NSPredicate *)predicateForEventsWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 calendars:(NSArray *)arg3;
- (bool)removeEvent:(EKEvent *)arg1 span:(long long)arg2 error:(id*)arg3;
- (void)setDelegate:(id <MapsSuggestionsEventKitConnectorDelegate>)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (NSArray *)visibleCalendars;

@end
