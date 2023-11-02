
@interface WLWiFiDeviceClient : NSObject {
    struct __WiFiDeviceClient { } * _ref;
}

@property (nonatomic) struct __WiFiDeviceClient { }*ref;

- (bool)_completionMapsAreEmpty;
- (id)_hostedNetworks;
- (id)_initWithoutWiFiDeviceClientRef;
- (int)_startNetworkWithRole:(int)arg1 request:(id)arg2 session:(id)arg3;
- (int)_stopNetwork:(id)arg1 session:(id)arg2;
- (void)dealloc;
- (void)disassociate;
- (id)hostedNetworkMatchingSSID:(id)arg1;
- (id)initWithWiFiDeviceClientRef:(struct __WiFiDeviceClient { }*)arg1;
- (struct __WiFiDeviceClient { }*)ref;
- (void)setRef:(struct __WiFiDeviceClient { }*)arg1;
- (void)startNetworkWithHostRole:(int)arg1 request:(id)arg2 completion:(id /* block */)arg3;
- (void)stopNetwork:(id)arg1 completion:(id /* block */)arg2;

@end
