
@interface HMISystemResourceUsageMonitoriPad : HMFObject <HMFLogging, HMISystemResourceUsageMonitorProtocol> {
    HMISystemResourceUsage * _currentSystemResourceUsage;
    <HMISystemResourceUsageMonitorDelegate> * _delegate;
    bool  _displayOn;
    bool  _locked;
    HMINotifydObserver * _notifydObserverForDisplayState;
    HMINotifydObserver * _notifydObserverForLockState;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage;
@property (readonly, copy) NSString *debugDescription;
@property <HMISystemResourceUsageMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayOn) bool displayOn;
@property (readonly) unsigned long long hash;
@property (getter=isLocked) bool locked;
@property (readonly) HMINotifydObserver *notifydObserverForDisplayState;
@property (readonly) HMINotifydObserver *notifydObserverForLockState;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)computeResourceUsageLevel;
- (id)currentSystemResourceUsage;
- (id)delegate;
- (id)getCurrentSystemResourceUsage;
- (void)handleResourceUsageNotification;
- (id)initWithWorkQueue:(id)arg1;
- (bool)isDisplayOn;
- (bool)isLocked;
- (id)notifydObserverForDisplayState;
- (id)notifydObserverForLockState;
- (void)possibleComputeResourceChange;
- (void)setDelegate:(id)arg1;
- (void)setDisplayOn:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)start;
- (id)workQueue;

@end
