
@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) unsigned long long appleMediaAccessoryVariant;
@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) bool isAppleMediaAccessory;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) bool requiresHomePod2ndGenPairing;
@property (readonly) bool requiresHomePodMiniPairing;
@property (readonly) unsigned long long supportedStereoPairVersions;
@property (readonly) HMFSystemInfo *systemInfo;

+ (id)shortDescription;

- (unsigned long long)appleMediaAccessoryVariant;
- (id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 productColor:(long long)arg4 idsIdentifierString:(id)arg5 rawAccessoryCapabilities:(id)arg6 rawResidentCapabilities:(id)arg7 messageDispatcher:(id)arg8;
- (id)createUnassociatedHomePodAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 productColor:(long long)arg4 idsIdentifierString:(id)arg5 requiredPairingCapabilities:(unsigned long long)arg6 minimumPairingSoftware:(id)arg7 rawAccessoryCapabilities:(id)arg8 rawResidentCapabilities:(id)arg9 messageDispatcher:(id)arg10;
- (id)currentAccessoryMediaRouteIdentifier;
- (id)currentDevice;
- (bool)isAppleMediaAccessory;
- (id)performOperation:(id)arg1;
- (id)productInfo;
- (bool)requiresHomePod2ndGenPairing;
- (bool)requiresHomePodMiniPairing;
- (unsigned long long)supportedStereoPairVersions;
- (id)systemInfo;

@end
