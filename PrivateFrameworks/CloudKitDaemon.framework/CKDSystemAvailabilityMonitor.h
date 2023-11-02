
@interface CKDSystemAvailabilityMonitor : NSObject {
    unsigned long long  _availabilityState;
    unsigned long long  _simulatedAvailabilityState;
    NSMutableSet * _watcherWrappers;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailabilityState;
@property (nonatomic, retain) NSMutableSet *watcherWrappers;

+ (void)initialize;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_clearVanishedWatchers;
- (void)_logAvailabilityDescription;
- (void)_systemMayNowBeReady;
- (void)assertAvailability:(unsigned long long)arg1;
- (id)availabilityDescription;
- (unsigned long long)availabilityState;
- (unsigned long long)currentAvailabilityState;
- (void)dealloc;
- (bool)deviceUnlockedSinceBoot;
- (id)initInternal;
- (bool)registerWatcher:(id)arg1;
- (void)removeNotifications;
- (void)resetToUnavailableForUnitTests;
- (void)setAvailabilityState:(unsigned long long)arg1;
- (void)setSimulatedAvailabilityState:(unsigned long long)arg1;
- (void)setWatcherWrappers:(id)arg1;
- (void)simulateBuddyCompletedForUnitTests;
- (void)simulateFirstUnlockForUnitTests;
- (unsigned long long)simulatedAvailabilityState;
- (id)watcherWrappers;

@end
