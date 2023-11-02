
@interface MSPSharedTripReceiverCapabilities : NSObject <NSCopying> {
    NSSet * _supportedProperties;
    NSSet * _unsupportedProperties;
}

@property (nonatomic, readonly) bool supportsRoutingPathLeg;
@property (nonatomic, readonly) bool supportsWaypointRouteSharing;

+ (id)allKnownReceiverCapabilities;
+ (void)enumerateKnownReceiverCapabilityConfigurationsForState:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)enumerateReceiverCapabilityConfigurations:(id)arg1 forState:(id)arg2 withBlock:(id /* block */)arg3;
+ (void)fetchReceiverCapabilitiesForDestinations:(id)arg1 completion:(id /* block */)arg2;
+ (id)legacyReceiverCapabilities;
+ (id)starskyReceiverCapabilities;
+ (id)sydromeReceiverCapabilities;
+ (id)unrestrictedReceiverCapabilities;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)idsSendMessageOptions;
- (id)initWithIDSEndpointCapabilities:(id)arg1;
- (id)initWithRegistrationPropertiesSupported:(id)arg1 propertiesUnsupported:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)supportsRoutingPathLeg;
- (bool)supportsWaypointRouteSharing;

@end
