
@interface ATXWifiStateMonitor : NSObject {
    struct __WiFiDeviceClient { } * _device;
    bool  _isActive;
    NSDate * _lastSeenDate;
    NSString * _lastSeenSSID;
    struct __WiFiManagerClient { } * _manager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *SSID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)SSID;
- (void)_start;
- (void)dealloc;
- (id)init;

@end
