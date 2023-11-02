
@interface ABCPeriodicMaintenanceActivity : NSObject {
    NSMutableArray * _activities;
    unsigned long long  _nextActivityIndex;
}

+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;
+ (void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(id /* block */)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleActivityRun:(id)arg1;
- (void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(id /* block */)arg3;
- (void)_registerPeriodicMaintenanceActivity;
- (void)dealloc;
- (id)init;

@end
