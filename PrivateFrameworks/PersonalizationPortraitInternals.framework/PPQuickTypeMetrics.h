
@interface PPQuickTypeMetrics : NSObject {
    PETDistributionEventTracker * _contactsMatches;
    PETDistributionEventTracker * _eventsMatches;
    PETDistributionEventTracker * _foundInAppsMatches;
    PETScalarEventTracker * _frameworkErrors;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)contactMatchesWithContactsCount:(unsigned long long)arg1 foundInAppsCount:(unsigned long long)arg2;
+ (void)eventsMatches:(unsigned long long)arg1;
+ (void)frameworkError:(id)arg1 errorCode:(long long)arg2;

- (void).cxx_destruct;
- (id)init;

@end
