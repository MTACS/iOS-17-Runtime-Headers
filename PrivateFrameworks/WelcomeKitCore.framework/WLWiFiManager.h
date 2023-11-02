
@interface WLWiFiManager : NSObject {
    struct __WiFiManagerClient { } * _ref;
}

@property (nonatomic, readonly) bool isTetheringSupported;
@property (nonatomic) struct __WiFiManagerClient { }*ref;

- (id)createDeviceClient;
- (void)dealloc;
- (void)disable;
- (void)enable;
- (id)init;
- (bool)isTetheringSupported;
- (struct __WiFiManagerClient { }*)ref;
- (void)setRef:(struct __WiFiManagerClient { }*)arg1;

@end
