
@interface NLSeymourAvailabilityProvider : NSObject <NLSeymourAvailabilityObservable, SeymourAvailabilityProviding> {
    void availability;
    void contentAvailabilityClient;
    void eventHubToken;
    void observers;
    void subscriptionClient;
}

@property (nonatomic) long long availability;
@property (nonatomic, retain) id observers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)availability;
- (id)init;
- (id)initWithDependenciesWrapper:(id)arg1;
- (void)notifyObservers;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setObservers:(id)arg1;
- (void)update;

@end
