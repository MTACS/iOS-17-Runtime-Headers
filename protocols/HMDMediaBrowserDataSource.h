
@protocol HMDMediaBrowserDataSource

@required

- (unsigned long long)appleMediaAccessoryVariant;
- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedAppleMediaAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 productColor:(long long)arg4 idsIdentifierString:(NSString *)arg5 rawAccessoryCapabilities:(NSData *)arg6 rawResidentCapabilities:(NSData *)arg7 messageDispatcher:(HMFMessageDispatcher *)arg8;
- (HMDUnassociatedAppleMediaAccessory *)createUnassociatedHomePodAccessory:(NSString *)arg1 name:(NSString *)arg2 category:(HMAccessoryCategory *)arg3 productColor:(long long)arg4 idsIdentifierString:(NSString *)arg5 requiredPairingCapabilities:(unsigned long long)arg6 minimumPairingSoftware:(HMDHomeKitVersion *)arg7 rawAccessoryCapabilities:(NSData *)arg8 rawResidentCapabilities:(NSData *)arg9 messageDispatcher:(HMFMessageDispatcher *)arg10;
- (NSString *)currentAccessoryMediaRouteIdentifier;
- (HMDDevice *)currentDevice;
- (bool)isAppleMediaAccessory;
- (<HMFCancellable> *)performOperation:(NSOperation *)arg1;
- (HMFProductInfo *)productInfo;
- (bool)requiresHomePod2ndGenPairing;
- (bool)requiresHomePodMiniPairing;
- (unsigned long long)supportedStereoPairVersions;
- (HMFSystemInfo *)systemInfo;

@end
