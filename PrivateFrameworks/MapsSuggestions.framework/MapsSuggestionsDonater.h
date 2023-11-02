
@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)donateETA:(id)arg1 entry:(id)arg2;
- (bool)donateFlightLookupWithFlightNumber:(id)arg1 departureAirportCode:(id)arg2 departureTime:(id)arg3;
- (bool)donateSignalPack:(id)arg1;
- (id)init;
- (id)uniqueName;

@end
