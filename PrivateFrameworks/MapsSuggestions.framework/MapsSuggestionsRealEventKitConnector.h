
@interface MapsSuggestionsRealEventKitConnector : NSObject <MapsSuggestionsEventKitConnector> {
    NSObject<OS_dispatch_queue> * _queue;
    <MapsSuggestionsEventKitConnectorDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsEventKitConnectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)_eventStoreDidChange:(id)arg1;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (id)delegate;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventsMatchingPredicate:(id)arg1;
- (id)init;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (bool)removeEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)uniqueName;
- (id)visibleCalendars;

@end
