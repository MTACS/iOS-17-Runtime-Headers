
@interface CRKConcreteAirPlayPrimitives : NSObject <CRKAirPlayPrimitives> {
    NSNotificationCenter * _notificationCenter;
    AVOutputContext * _outputContext;
}

@property (nonatomic, readonly) <CRKOutputDevice> *currentOutputDevice;
@property (nonatomic, readonly) <CRKOutputDevice> *localOutputDevice;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) AVOutputContext *outputContext;

- (void).cxx_destruct;
- (id)beginOutputDeviceBrowsingSession;
- (id)currentOutputDevice;
- (id)initWithOutputContext:(id)arg1 notificationCenter:(id)arg2;
- (id)localOutputDevice;
- (id)notificationCenter;
- (id)observeCurrentOutputDeviceChangesWithHandler:(id /* block */)arg1;
- (id)outputContext;

@end
