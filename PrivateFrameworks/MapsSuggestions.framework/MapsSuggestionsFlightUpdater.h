
@interface MapsSuggestionsFlightUpdater : NSObject {
    <MapsSuggestionsFlightRequester> * _flightRequester;
    <MapsSuggestionsNetworkRequester> * _networkRequester;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithFlightRequester:(id)arg1 networkRequester:(id)arg2;
- (BOOL)updateFlightsForEntry:(id)arg1 handler:(id /* block */)arg2;

@end
