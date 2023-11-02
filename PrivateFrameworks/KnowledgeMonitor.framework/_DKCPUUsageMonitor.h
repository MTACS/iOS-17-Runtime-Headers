
@interface _DKCPUUsageMonitor : _DKMonitor {
    unsigned long long  _lastCPUUsageLevel;
    unsigned long long  _lastIdleTick;
    unsigned long long  _lastSysTick;
    unsigned long long  _lastUserTick;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic) unsigned long long lastCPUUsageLevel;
@property (nonatomic) unsigned long long lastIdleTick;
@property (nonatomic) unsigned long long lastSysTick;
@property (nonatomic) unsigned long long lastUserTick;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)getCPUTicksForUser:(unsigned long long*)arg1 system:(unsigned long long*)arg2 idle:(unsigned long long*)arg3;
- (unsigned long long)getCPUUsageLevelFromPercentage:(unsigned long long)arg1;
- (unsigned long long)getCurrentCPUUsageLevel;
- (unsigned long long)lastCPUUsageLevel;
- (unsigned long long)lastIdleTick;
- (unsigned long long)lastSysTick;
- (unsigned long long)lastUserTick;
- (id)loadState;
- (void)saveState;
- (void)setCurrentCPUUsageLevel:(unsigned long long)arg1;
- (void)setLastCPUUsageLevel:(unsigned long long)arg1;
- (void)setLastIdleTick:(unsigned long long)arg1;
- (void)setLastSysTick:(unsigned long long)arg1;
- (void)setLastUserTick:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (id)timer;
- (bool)updateCPUUsagePercentage:(unsigned long long*)arg1;

@end
