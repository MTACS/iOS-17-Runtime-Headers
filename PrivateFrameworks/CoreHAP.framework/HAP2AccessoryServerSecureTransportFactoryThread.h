
@interface HAP2AccessoryServerSecureTransportFactoryThread : NSObject <HAP2AccessoryServerSecureTransportFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createSecureTransportWithTransport:(id)arg1 isPaired:(bool)arg2 encryptedSession:(id)arg3;

@end
