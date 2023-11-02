
@interface AFConnectionAvailabilityObserver : NSObject <AFNetworkAvailabilityObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)networkAvailability:(id)arg1 isAvailable:(bool)arg2;

@end
