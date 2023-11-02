
@interface _CDMemoryUsageIntervalTracker : NSObject {
    NSHashTable * _activeIntervals;
    unsigned long long  _activeMemoryLimit;
    unsigned long long  _counter;
    unsigned long long  _intervalTimeout;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)init;

@end
