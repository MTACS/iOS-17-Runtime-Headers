
@interface PKWebServiceVirtualCardFeature : PKWebServiceRegionFeature {
    NSSet * _implicitlySupportedNetworks;
    NSString * _merchantId;
    NSDictionary * _networks;
}

@property (nonatomic, readonly, copy) NSSet *implicitlySupportedNetworks;
@property (nonatomic, readonly, copy) NSString *merchantId;
@property (nonatomic, copy) NSDictionary *networks;

+ (id)virtualCardFeatureWithWebService:(id)arg1;

- (void).cxx_destruct;
- (bool)doesPaymentApplication:(id)arg1 supportVPANOnDevice:(id)arg2 associatedAccountFeatureIdentifier:(unsigned long long)arg3;
- (id)implicitlySupportedNetworks;
- (id)initWithFeatureType:(long long)arg1 dictionary:(id)arg2 region:(id)arg3;
- (id)merchantId;
- (id)networks;
- (unsigned long long)refreshTypeForPaymentApplication:(id)arg1;
- (void)setNetworks:(id)arg1;

@end
