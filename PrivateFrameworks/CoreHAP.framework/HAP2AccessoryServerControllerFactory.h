
@interface HAP2AccessoryServerControllerFactory : HAP2LoggingObject <HAP2AccessoryServerControllerFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createControllerWithEncoding:(id)arg1 secureTransport:(id)arg2 operationQueue:(id)arg3;

@end
