
@interface MapsSuggestionsVirtualGarage : NSObject <MapsSuggestionsVirtualGarageConnectorDelegate> {
    <MapsSuggestionsVirtualGarageConnector> * _connector;
    bool  _isConnectedToVG;
    MapsSuggestionsObservers * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeConnection;
- (bool)entriesForUnpairedVehiclesWithHandler:(id /* block */)arg1;
- (id)initFromResourceDepot:(id)arg1;
- (id)initWithConnector:(id)arg1;
- (void)openConnection;
- (void)registerObserver:(id)arg1;
- (void)stateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)virtualGarageDidUpdateUnpairedVehicles:(id)arg1;

@end
