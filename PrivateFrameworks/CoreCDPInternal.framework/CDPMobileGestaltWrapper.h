
@interface CDPMobileGestaltWrapper : NSObject <CDPDeviceCapabilityProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)supportsMesa;
- (bool)supportsPearl;

@end
