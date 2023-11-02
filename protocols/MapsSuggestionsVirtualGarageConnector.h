
@protocol MapsSuggestionsVirtualGarageConnector <MapsSuggestionsObject>

@required

- (void)closeVGConnection;
- (<MapsSuggestionsVirtualGarageConnectorDelegate> *)delegate;
- (void)fetchStateOfChargeForVehicleWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, VGVehicle *, NSError *, void*
- (void)fetchUnpairedVehiclesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)openVGConnection;
- (void)setDelegate:(id <MapsSuggestionsVirtualGarageConnectorDelegate>)arg1;
- (void)startObservingVG;
- (void)stopObservingVG;

@end
