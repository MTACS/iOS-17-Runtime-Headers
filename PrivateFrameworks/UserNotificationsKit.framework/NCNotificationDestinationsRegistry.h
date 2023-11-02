
@interface NCNotificationDestinationsRegistry : NSObject {
    NSMutableDictionary * _activeDestinations;
    NSMutableDictionary * _destinations;
    NSMutableDictionary * _readyDestinations;
}

@property (nonatomic, retain) NSMutableDictionary *activeDestinations;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSMutableDictionary *destinations;
@property (nonatomic, retain) NSMutableDictionary *readyDestinations;
@property (nonatomic, readonly) NSArray *registeredDestinations;

- (void).cxx_destruct;
- (id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(id)arg2;
- (id)activeDestinations;
- (unsigned long long)count;
- (id)destinationIdentifiersForRequestDestinations:(id)arg1;
- (id)destinations;
- (id)destinationsForRequestDestinations:(id)arg1;
- (bool)hasActiveDestinationsForRequest:(id)arg1;
- (id)init;
- (bool)isRegisteredDestination:(id)arg1;
- (id)readyDestinations;
- (id)readyDestinationsForRequestDestinations:(id)arg1;
- (void)registerDestination:(id)arg1;
- (void)registerDestination:(id)arg1 forIdentifier:(id)arg2;
- (id)registeredDestinations;
- (void)setActiveDestinations:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(bool)arg2;
- (void)setDestination:(id)arg1 ready:(bool)arg2;
- (void)setDestinationWithIdentifier:(id)arg1 enabled:(bool)arg2;
- (void)setDestinations:(id)arg1;
- (void)setReadyDestinations:(id)arg1;
- (void)unregisterDestination:(id)arg1;
- (void)unregisterDestinationForIdentifier:(id)arg1;

@end
