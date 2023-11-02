
@interface MapsSuggestionsRealVirtualGarageConnector : NSObject <MapsSuggestionsVirtualGarageConnector, VGVirtualGarageObserver> {
    <MapsSuggestionsVirtualGarageConnectorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsVirtualGarageConnectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)closeVGConnection;
- (id)delegate;
- (void)fetchStateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchUnpairedVehiclesWithHandler:(id /* block */)arg1;
- (void)openVGConnection;
- (void)setDelegate:(id)arg1;
- (void)startObservingVG;
- (void)stopObservingVG;
- (id)uniqueName;
- (void)virtualGarage:(id)arg1 didUpdateUnpairedVehicles:(id)arg2;
- (void)virtualGarageDidUpdate:(id)arg1;

@end
