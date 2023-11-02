
@interface MTDeviceCapacityMonitor : NSObject {
    void ___capacityLevel;
    void _activeNotificationName;
    void _capacityChangeObservers;
    void activeObserver;
    void capacityThreshold;
    void diskAccessQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
    void vfsSource;
}

@property (nonatomic, copy) NSString *activeNotificationName;

+ (id)shared;

- (void).cxx_destruct;
- (id)activeNotificationName;
- (long long)addCapacityChangeObserverWithOptions:(long long)arg1 callback:(id /* block */)arg2;
- (void)capacityLevel:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)removeCapacityChangeObserverWith:(long long)arg1;
- (void)setActiveNotificationName:(id)arg1;

@end
