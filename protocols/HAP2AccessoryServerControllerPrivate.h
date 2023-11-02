
@protocol HAP2AccessoryServerControllerPrivate <HAP2AccessoryServerController>

@required

- (<HAP2AccessoryServerPrivate> *)accessoryServer;
- (void)closeSession;
- (<HAP2AccessoryServerEncoding> *)encoding;
- (bool)mergeWithNewController:(id <HAP2AccessoryServerControllerPrivate>)arg1;
- (void)setAccessoryServer:(id <HAP2AccessoryServerPrivate>)arg1;
- (<HAP2AccessoryServerSecureTransport> *)transport;

@end
