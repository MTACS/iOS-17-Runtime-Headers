
@interface MapsSuggestionsRealFlightRequester : NSObject <MapsSuggestionsFlightRequester>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (bool)requestFlightsWithFullFlightNumber:(id)arg1 departureDate:(id)arg2 handler:(id /* block */)arg3;
- (id)uniqueName;

@end
