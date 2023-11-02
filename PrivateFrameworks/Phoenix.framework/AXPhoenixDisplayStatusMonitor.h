
@interface AXPhoenixDisplayStatusMonitor : AXPhoenixEventMonitor {
    bool  _displayOn;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isDisplayOn, nonatomic) bool displayOn;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_displayStateChanged:(double)arg1;
- (void)_notifyObserver:(id)arg1 isDisplayOn:(bool)arg2 timestamp:(double)arg3;
- (bool)_queryIsDisplayOn;
- (void)_registerForSpringboardNotificationsWithQueue:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)_unregisterForSpringboardNotifications;
- (id)init;
- (bool)isDisplayOn;
- (int)notifyToken;
- (id)queue;
- (void)setDisplayOn:(bool)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setQueue:(id)arg1;

@end
