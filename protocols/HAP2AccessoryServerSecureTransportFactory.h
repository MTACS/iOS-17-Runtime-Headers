
@protocol HAP2AccessoryServerSecureTransportFactory <NSObject>

@required

- (<HAP2AccessoryServerSecureTransport> *)createSecureTransportWithTransport:(id <HAP2AccessoryServerTransport>)arg1 isPaired:(bool)arg2 encryptedSession:(id <HAPEncryptedSession>)arg3;

@end
