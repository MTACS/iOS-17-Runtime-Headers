
@interface _DKEventStatsCounterInternal : NSObject {
    unsigned long long * _counters;
    NSString * _domain;
    NSString * _eventName;
    PETEventTracker * _eventTracker;
    NSString * _eventType;
    bool  _hasResult;
    bool  _hasType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _numCounters;
    NSArray * _typeValues;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
