
@protocol ARMemoryPressureMonitorDelegate <NSObject>

@required

- (void)memoryPressureMonitor:(ARMemoryPressureMonitor *)arg1 didUpdateProcessMemoryPressureCondition:(long long)arg2;
- (void)memoryPressureMonitor:(ARMemoryPressureMonitor *)arg1 didUpdateSystemMemoryPressureCondition:(long long)arg2;

@end
