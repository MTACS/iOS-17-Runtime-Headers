
@interface MapsSuggestionsMapsSync : NSObject <MapsSuggestionsMapsSyncConnectorDelegate, MapsSuggestionsObject> {
    <MapsSuggestionsMapsSyncConnector> * _connector;
    MapsSuggestionsObservers * _favoriteItemObservers;
    MapsSuggestionsObservers * _historyObservers;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    MapsSuggestionsObservers * _transitItemObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMapsSyncObserver:(id)arg1 forContentType:(long long)arg2;
- (BOOL)canProduceRatingRequestForMapItem:(id)arg1 maxAge:(double)arg2 handler:(id /* block */)arg3;
- (BOOL)deleteEntry:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)didProduceRatingRequestForMapItem:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)durationSinceLastTransitHistoryRoute:(id /* block */)arg1;
- (BOOL)entriesFromHistoryWithHandler:(id /* block */)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithMapsSyncConnector:(id)arg1;
- (BOOL)mapItemsForHistoricPlaces:(bool)arg1 routes:(bool)arg2 maxAge:(double)arg3 handler:(id /* block */)arg4;
- (void)mapsSyncDidChangeForType:(long long)arg1;
- (void)removeMapsSyncObserver:(id)arg1 forContentType:(long long)arg2;
- (void)removeMapsSyncObserverForAllContentTypes:(id)arg1;
- (id)uniqueName;
- (BOOL)userHasFavoriteTransitLinesWithHandler:(id /* block */)arg1;
- (BOOL)userHasFavoriteTransitPOIsWithHandler:(id /* block */)arg1;

@end
