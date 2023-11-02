
@interface EMCoreAnalyticsCollector : NSObject {
    <EFScheduler> * _oneTimeScheduler;
    EFLocked * _periodicDataProviders;
    bool  _registered;
    <EFScheduler> * _registrationScheduler;
}

@property (nonatomic, readonly) <EFScheduler> *oneTimeScheduler;
@property (nonatomic, readonly) EFLocked *periodicDataProviders;
@property (nonatomic) bool registered;
@property (nonatomic, readonly) <EFScheduler> *registrationScheduler;

+ (id)log;

- (void).cxx_destruct;
- (void)_logPeriodicEvents;
- (void)_registerXPCActivity;
- (id)init;
- (void)logOneTimeEvent:(id)arg1;
- (id)oneTimeScheduler;
- (id)periodicDataProviders;
- (id)registerForLogEventsWithPeriodicDataProvider:(id)arg1;
- (bool)registered;
- (id)registrationScheduler;
- (void)setRegistered:(bool)arg1;

@end
