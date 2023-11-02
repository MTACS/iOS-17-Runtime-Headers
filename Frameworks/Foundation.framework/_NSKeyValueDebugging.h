
@interface _NSKeyValueDebugging : NSObject {
    NSTimer * _consistencyCheckTimer;
    NSMutableDictionary * _consistencyTable;
    bool  _hasScheduledWillDidClear;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observedKeyPathsByObserver;
    NSMutableDictionary * _willDidCountTable;
}

- (void)_checkConsistency;
- (void)_checkConsistencyForStatsWhileOutOfLock:(id)arg1 forPair:(id)arg2 timingDescription:(id)arg3;
- (void)_clearWillDidTable;
- (void)_object:(id)arg1 trackChangeForKeyOrKeys:(id)arg2 operation:(long long)arg3;
- (void)dealloc;
- (id)init;

@end
