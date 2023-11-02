
@interface MapsSuggestionsRealPortraitConnector : NSObject <MapsSuggestionsPortraitConnector> {
    PPConnectionsStore * _connectionsStore;
    PPEventStore * _eventStore;
    PPLocationStore * _locationStore;
    PPNamedEntityStore * _namedEntityStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectionsStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (bool)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(id /* block */)arg6;
- (bool)iterScoredEventsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)locationQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
- (void)locationStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)namedEntityQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
- (void)namedEntityStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)rankedNamedEntitiesWihQuery:(id)arg1 error:(id*)arg2;

@end
