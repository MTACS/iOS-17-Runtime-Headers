
@interface INExtensionContextIntentResponseObserver : NSObject <INGetCarPowerLevelStatusIntentResponseObserver, INGetRideStatusIntentResponseObserver> {
    <INIntentResponseObserver> * _remoteObserver;
    NSMapTable * _remoteObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *remoteObservers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_intentResponseDidUpdate:(id)arg1;
- (void)getCarPowerLevelStatusResponseDidUpdate:(id)arg1;
- (void)getRideStatusResponseDidUpdate:(id)arg1;
- (id)init;
- (id)remoteObservers;
- (void)setObserver:(id)arg1 forConnection:(id)arg2;

@end
