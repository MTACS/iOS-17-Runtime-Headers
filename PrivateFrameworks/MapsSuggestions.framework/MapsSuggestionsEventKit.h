
@interface MapsSuggestionsEventKit : NSObject <MapsSuggestionsEventKitConnectorDelegate, MapsSuggestionsObject> {
    MapsSuggestionsCanKicker * _changedNotificationCanKicker;
    <MapsSuggestionsEventKitConnector> * _connector;
    NSMutableDictionary * _handleToMapItemMapping;
    NSMutableDictionary * _handleToMapItemOriginMapping;
    <MapsSuggestionsNetworkRequester> * _network;
    MapsSuggestionsObservers * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _setOfEventReservationSubtypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (bool)canProduceEntriesOfType:(long long)arg1;
- (bool)deleteOrDeclineEntry:(id)arg1 handler:(id /* block */)arg2;
- (bool)entriesForEventsAtLocation:(id)arg1 period:(id)arg2 handler:(id /* block */)arg3;
- (void)eventKitDidChange:(id)arg1;
- (bool)hasVisibleCalendars;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithConnector:(id)arg1 network:(id)arg2;
- (void)registerObserver:(id)arg1;
- (id)uniqueName;
- (void)unregisterObserver:(id)arg1;

@end
