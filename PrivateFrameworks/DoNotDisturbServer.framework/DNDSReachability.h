
@interface DNDSReachability : NSObject {
    NSObject<OS_dispatch_source> * _debounceTimer;
    NSHashTable * _delegates;
    bool  _initialized;
    bool  _lastInformedReachability;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _reachable;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_source> *debounceTimer;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (getter=isInitialized, nonatomic) bool initialized;
@property (nonatomic) bool lastInformedReachability;
@property (nonatomic, readonly) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (getter=isReachable, nonatomic) bool reachable;

+ (id)commonReachability;

- (void).cxx_destruct;
- (void)_informDelegates;
- (void)_setReachable:(bool)arg1;
- (void)_updateHandlerForPath:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)debounceTimer;
- (id)delegates;
- (id)init;
- (bool)isInitialized;
- (bool)isReachable;
- (bool)lastInformedReachability;
- (id)pathMonitor;
- (id)queue;
- (void)removeDelegate:(id)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setLastInformedReachability:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (void)setupPathMonitor;

@end
