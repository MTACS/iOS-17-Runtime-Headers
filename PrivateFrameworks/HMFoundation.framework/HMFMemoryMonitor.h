
@interface HMFMemoryMonitor : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    long long  _lastProcessMemoryState;
    NSDate * _lastProcessMemoryStateUpdateTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    bool  _monitoring;
    long long  _systemMemoryState;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property long long lastProcessMemoryState;
@property (nonatomic, retain) NSDate *lastProcessMemoryStateUpdateTime;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryPressureSource;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic) long long systemMemoryState;

+ (id)memoryMonitor;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)dealloc;
- (id)init;
- (bool)isMonitoring;
- (long long)lastProcessMemoryState;
- (id)lastProcessMemoryStateUpdateTime;
- (id)memoryPressureSource;
- (void)setLastProcessMemoryState:(long long)arg1;
- (void)setLastProcessMemoryStateUpdateTime:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setSystemMemoryState:(long long)arg1;
- (void)start;
- (void)stop;
- (long long)systemMemoryState;

@end
