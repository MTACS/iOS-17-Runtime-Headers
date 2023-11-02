
@interface PKWebServiceDisbursementFeature : PKWebServiceRegionFeature {
    NSSet * _supportedNetworks;
}

@property (nonatomic, readonly, copy) NSSet *supportedNetworks;

+ (id)disbursementFeatureWithWebService:(id)arg1;
+ (id)fallbackSupportedNetworksIfNoFeatureFound;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;
- (id)initWithSupportedNetworks:(id)arg1;
- (id)supportedNetworks;

@end
