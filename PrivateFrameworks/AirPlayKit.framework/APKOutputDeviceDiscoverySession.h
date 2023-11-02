
@interface APKOutputDeviceDiscoverySession : NSObject {
    AVOutputDeviceDiscoverySession * _session;
}

@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic, readonly) AVOutputDeviceDiscoverySession *session;

- (void).cxx_destruct;
- (void)activate;
- (id)availableOutputDevices;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (id)session;

@end
