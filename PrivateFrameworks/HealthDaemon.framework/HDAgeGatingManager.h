
@interface HDAgeGatingManager : NSObject <HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    int  _significantTimeChangeNotificationToken;
    int  _userCharacteristicsDidChangeNotificationToken;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ageInYearsWithError:(id*)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (void)didReceiveDayChangeNotification:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 userDefaults:(id)arg2 queue:(id)arg3;
- (void)profileDidBecomeReady:(id)arg1;
- (void)unitTesting_updateAgeGates;

@end
