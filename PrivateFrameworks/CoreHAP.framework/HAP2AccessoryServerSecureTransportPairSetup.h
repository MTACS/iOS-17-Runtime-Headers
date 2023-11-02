
@interface HAP2AccessoryServerSecureTransportPairSetup : HAP2AccessoryServerSecureTransportBase <HAP2AccessoryServerTransportDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultEncryptedSession;

- (id)initWithTransport:(id)arg1 operationQueue:(id)arg2 encryptedSession:(id)arg3;
- (void)transport:(id)arg1 didReceiveEvent:(id)arg2;

@end
