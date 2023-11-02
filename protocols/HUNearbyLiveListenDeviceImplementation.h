
@protocol HUNearbyLiveListenDeviceImplementation

@required

+ (id)new;

- (id)init;
- (id)initWithController:(HUNearbyLiveListenController *)arg1;
- (void)startLiveListen;
- (void)startObserving;
- (void)stopLiveListen;
- (void)stopObserving;

@end
