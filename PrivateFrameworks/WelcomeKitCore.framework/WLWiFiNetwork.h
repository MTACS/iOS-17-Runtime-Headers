
@interface WLWiFiNetwork : NSObject {
    struct __WiFiNetwork { } * _ref;
}

@property (nonatomic) struct __WiFiNetwork { }*ref;
@property (nonatomic, readonly) NSString *ssid;

- (void)dealloc;
- (id)initWithWiFiNetworkRef:(struct __WiFiNetwork { }*)arg1;
- (struct __WiFiNetwork { }*)ref;
- (void)setRef:(struct __WiFiNetwork { }*)arg1;
- (id)ssid;

@end
