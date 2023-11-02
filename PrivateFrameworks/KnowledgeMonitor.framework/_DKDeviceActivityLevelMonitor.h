
@interface _DKDeviceActivityLevelMonitor : _DKMonitor {
    BMSource * _bmSource;
    <_CDLocalContext> * _context;
    unsigned long long  _currentInUseStatus;
    NSObject<OS_dispatch_source> * _debounceTimer;
    bool  _enabled;
    _CDContextualKeyPath * _inUseStatus;
    bool  _initialized;
    _CDContextualKeyPath * _keyPathForDeviceToppingOff;
    _CDContextualKeyPath * _keyPathForReducedPerfStateStatus;
    unsigned long long  _lastInUseStatus;
    NSDate * _lastSetActiveDate;
    _CDContextualKeyPath * _lastUseDate;
    bool  _limitsImposed;
    bool  _limitsInitialized;
    int  _siriToken;
    unsigned long long  _userActivityNotificationHandle;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (nonatomic) unsigned long long currentInUseStatus;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *debounceTimer;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) _CDContextualKeyPath *inUseStatus;
@property (nonatomic) bool initialized;
@property (nonatomic, retain) _CDContextualKeyPath *keyPathForDeviceToppingOff;
@property (nonatomic, retain) _CDContextualKeyPath *keyPathForReducedPerfStateStatus;
@property (nonatomic) unsigned long long lastInUseStatus;
@property (nonatomic, retain) NSDate *lastSetActiveDate;
@property (nonatomic, retain) _CDContextualKeyPath *lastUseDate;
@property (nonatomic) bool limitsImposed;
@property (nonatomic) bool limitsInitialized;
@property (nonatomic) int siriToken;
@property (nonatomic) unsigned long long userActivityNotificationHandle;

+ (id)_eventWithState:(unsigned long long)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (void)initialize;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (id)context;
- (unsigned long long)currentInUseStatus;
- (void)deactivate;
- (void)dealloc;
- (id)debounceTimer;
- (bool)enabled;
- (void)handleUserActivity:(int)arg1;
- (id)inUseStatus;
- (bool)initialized;
- (id)keyPathForDeviceToppingOff;
- (id)keyPathForReducedPerfStateStatus;
- (unsigned long long)lastInUseStatus;
- (id)lastSetActiveDate;
- (id)lastUseDate;
- (bool)limitsImposed;
- (bool)limitsInitialized;
- (void)setContext:(id)arg1;
- (void)setCurrentInUseStatus:(unsigned long long)arg1;
- (void)setDebounceTimer:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInUseStatus:(id)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setKeyPathForDeviceToppingOff:(id)arg1;
- (void)setKeyPathForReducedPerfStateStatus:(id)arg1;
- (void)setLastActivityDate:(id)arg1;
- (void)setLastInUseStatus:(unsigned long long)arg1;
- (void)setLastSetActiveDate:(id)arg1;
- (void)setLastUseDate:(id)arg1;
- (void)setLimitsImposed:(bool)arg1;
- (void)setLimitsInitialized:(bool)arg1;
- (void)setSiriToken:(int)arg1;
- (void)setUserActivityNotificationHandle:(unsigned long long)arg1;
- (int)siriToken;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateActivityDateAndInUseState:(unsigned long long)arg1;
- (void)updateActivityInUseState:(unsigned long long)arg1;
- (void)updatePerformanceThrottleStatusWithLevel:(unsigned long long)arg1;
- (unsigned long long)userActivityNotificationHandle;

@end
