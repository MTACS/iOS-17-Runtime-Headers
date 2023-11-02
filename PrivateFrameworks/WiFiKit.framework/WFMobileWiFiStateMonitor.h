
@interface WFMobileWiFiStateMonitor : NSObject {
    struct __WiFiDeviceClient { } * _device;
    id /* block */  _handler;
    WFLinkQuality * _linkQuality;
    struct __WiFiManagerClient { } * _manager;
    long long  _state;
}

@property (nonatomic) struct __WiFiDeviceClient { }*device;
@property (copy) id /* block */ handler;
@property (nonatomic, retain) WFLinkQuality *linkQuality;
@property (nonatomic) struct __WiFiManagerClient { }*manager;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_updateState;
- (void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient { }*)arg1;
- (void)dealloc;
- (struct __WiFiDeviceClient { }*)device;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (id)linkQuality;
- (struct __WiFiManagerClient { }*)manager;
- (void)setDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setLinkQuality:(id)arg1;
- (void)setManager:(struct __WiFiManagerClient { }*)arg1;
- (void)setState:(long long)arg1;
- (void)startMonitoring;
- (long long)state;
- (void)stopMonitoring;

@end
