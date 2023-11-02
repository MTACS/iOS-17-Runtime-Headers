
@interface HAP2AccessoryServerPairingFactoryHAP : NSObject <HAP2AccessoryServerPairingFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createPairingDriverWithAccessoryInfo:(id)arg1 transport:(id)arg2 secureTransportFactory:(id)arg3 encoding:(id)arg4 operationQueue:(id)arg5;

@end
