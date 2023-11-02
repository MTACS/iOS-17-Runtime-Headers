
@interface AXSSMotionTrackingHIDManager : NSObject {
    NSMutableArray * __devices;
    HIDManager * __hidManager;
    NSObject<OS_dispatch_queue> * __hidManagerDispatchQueue;
    bool  __monitoring;
    <AXSSMotionTrackingHIDManagerDelegate> * _delegate;
}

@property (nonatomic, retain) NSMutableArray *_devices;
@property (nonatomic, retain) HIDManager *_hidManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_hidManagerDispatchQueue;
@property (nonatomic) bool _monitoring;
@property (nonatomic) <AXSSMotionTrackingHIDManagerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *devices;

- (void).cxx_destruct;
- (void)_deviceNotification:(id)arg1 added:(bool)arg2;
- (id)_devices;
- (id)_hidManager;
- (id)_hidManagerDispatchQueue;
- (bool)_monitoring;
- (void)dealloc;
- (id)delegate;
- (id)devices;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)set_devices:(id)arg1;
- (void)set_hidManager:(id)arg1;
- (void)set_hidManagerDispatchQueue:(id)arg1;
- (void)set_monitoring:(bool)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
