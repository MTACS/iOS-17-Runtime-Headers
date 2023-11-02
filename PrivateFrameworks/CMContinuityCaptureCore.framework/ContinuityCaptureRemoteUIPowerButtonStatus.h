
@interface ContinuityCaptureRemoteUIPowerButtonStatus : NSObject {
    ContinuityCaptureButtonPressTracker * _hidButtonTracker;
    HIDEventSystemClient * _hidEventSystemClient;
    bool  _invalidated;
    bool  _powerButtonPressed;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool invalidated;
@property (readonly) bool powerButtonPressed;

+ (void)invalidate;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (bool)powerButtonPressed;
- (void)setInvalidated:(bool)arg1;
- (void)setupPowerButtonMonitor;

@end
