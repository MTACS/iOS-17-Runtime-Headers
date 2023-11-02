
@interface HAP2AccessoryServerEncodingFactoryThread : NSObject <HAP2AccessoryServerEncodingFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createEncodingWithOperationQueue:(id)arg1 accessoryServerMetadata:(id)arg2 encodingFeatures:(unsigned long long)arg3;

@end
