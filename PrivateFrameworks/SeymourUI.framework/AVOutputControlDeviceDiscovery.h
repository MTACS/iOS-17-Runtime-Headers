
@interface AVOutputControlDeviceDiscovery : NSObject {
    AVOutputDeviceDiscoverySession * _session;
}

@property (nonatomic, readonly) AVOutputDeviceDiscoverySession *session;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (id)session;
- (bool)supportsFitnessDataDestinationForDeviceIdentifier:(id)arg1;

@end
