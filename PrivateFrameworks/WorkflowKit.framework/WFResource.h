
@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting> {
    NSError * _availabilityError;
    bool  _available;
    NSDictionary * _definition;
    bool  _shouldRefreshAvailability;
    NSObject<OS_dispatch_queue> * _stateAccessQueue;
}

@property (nonatomic, readonly) NSError *availabilityError;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDictionary *definition;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *eventDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldRefreshAvailability;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly) Class superclass;

+ (bool)alwaysMakeAvailable;
+ (bool)isSingleton;
+ (bool)mustBeAvailableForDisplay;
+ (bool)refreshesAvailabilityOnApplicationResume;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_availabilityError;
- (bool)_isAvailable;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)availabilityError;
- (void)dealloc;
- (id)definition;
- (id)eventDictionary;
- (id)init;
- (id)initWithDefinition:(id)arg1;
- (void)invalidateAvailability;
- (bool)isAvailable;
- (void)notifyResourcesAboutAvailabilityChange;
- (void)refreshAvailability;
- (void)refreshAvailabilityIfNeeded;
- (void)refreshAvailabilityWithForcedNotification;
- (void)refreshAvailabilityWithNotification;
- (void)refreshAvailabilityWithNotification:(bool)arg1;
- (bool)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(bool)arg1;
- (bool)shouldRefreshAvailability;
- (id)stateAccessQueue;
- (void)updateAvailability:(bool)arg1 withError:(id)arg2;

@end
