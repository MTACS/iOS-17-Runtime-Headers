
@interface CRKConcreteOutputDeviceBrowsingSession : NSObject <CRKOutputDeviceBrowsingSession> {
    AVOutputDeviceDiscoverySession * _discoverySession;
    NSNotificationCenter * _notificationCenter;
    AVOutputContext * _outputContext;
}

@property (nonatomic, readonly) AVOutputDeviceDiscoverySession *discoverySession;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) AVOutputContext *outputContext;
@property (nonatomic, readonly, copy) NSArray *outputDevices;

+ (id)sessionWithOutputContext:(id)arg1 notificationCenter:(id)arg2;

- (void).cxx_destruct;
- (id)discoverySession;
- (id)initWithDiscoverySession:(id)arg1 outputContext:(id)arg2 notificationCenter:(id)arg3;
- (void)invalidate;
- (id)notificationCenter;
- (id)observeBrowsedOutputDeviceChangesWithHandler:(id /* block */)arg1;
- (id)outputContext;
- (id)outputDevices;

@end
