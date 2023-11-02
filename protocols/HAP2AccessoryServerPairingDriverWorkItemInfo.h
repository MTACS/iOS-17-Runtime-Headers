
@protocol HAP2AccessoryServerPairingDriverWorkItemInfo <HAP2AccessoryServerPairingDriver>

@required

- (<HAP2UnpairedAccessoryServer> *)accessoryServer;
- (<HAP2AccessoryServerPairingDriverDelegate> *)delegate;
- (<HAP2AccessoryServerEncoding> *)encoding;
- (unsigned long long)featureFlags;
- (HAP2SerializedOperationQueue *)operationQueue;
- (HAPPairSetupSession *)pairingSession;
- (HAP2PropertyLock *)propertyLock;
- (<HAP2AccessoryServerSecureTransportFactory> *)secureTransportFactory;
- (void)setPairingSession:(HAPPairSetupSession *)arg1;
- (<HAP2AccessoryServerTransport> *)transport;
- (void)workItem:(id <HAP2AccessoryServerPairingDriverWorkItem>)arg1 finishedWithError:(NSError *)arg2;

@end
