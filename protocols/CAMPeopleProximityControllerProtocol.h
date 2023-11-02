
@protocol CAMPeopleProximityControllerProtocol

@required

- (id)initWithDelegate:(id <CAMPeopleProximityDelegate>)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (Class)proximityScannerClass;
- (void)setProximityScannerClass:(Class)arg1;
- (void)startDiscoveryForIdentities:(NSSet *)arg1;
- (void)stopDiscovery;

@end
