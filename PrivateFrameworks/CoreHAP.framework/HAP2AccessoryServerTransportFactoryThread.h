
@interface HAP2AccessoryServerTransportFactoryThread : NSObject <HAP2AccessoryServerTransportFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createTransportWithAccessoryInfo:(id)arg1 discovery:(id)arg2;

@end
