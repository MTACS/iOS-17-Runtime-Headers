
@interface PKPaymentDigitalIssuanceMetadata : NSObject {
    NSString * _action;
    PKDigitalIssuanceServiceProviderProduct * _autoTopUpProduct;
    NSString * _balanceIdentifier;
    NSString * _balanceLocalizedDescription;
    NSString * _balanceLocalizedDisplayName;
    NSArray * _defaultSuggestions;
    NSString * _merchantID;
    bool  _purchaseBased;
    NSArray * _serviceProviderAcceptedNetworks;
    NSArray * _serviceProviderCapabilities;
    NSString * _serviceProviderCountryCode;
    NSDictionary * _serviceProviderDict;
    NSString * _serviceProviderIdentifier;
    NSArray * _serviceProviderProducts;
    NSString * _serviceProviderProductsLocalizedDescription;
    NSString * _serviceProviderProductsLocalizedDisplayName;
    NSSet * _serviceProviderSupportedCountries;
}

@property (nonatomic, readonly, copy) NSString *action;
@property (nonatomic, readonly, copy) PKDigitalIssuanceServiceProviderProduct *autoTopUpProduct;
@property (nonatomic, readonly, copy) NSString *balanceIdentifier;
@property (nonatomic, readonly, copy) NSString *balanceLocalizedDescription;
@property (nonatomic, readonly, copy) NSString *balanceLocalizedDisplayName;
@property (nonatomic, readonly, copy) NSArray *defaultSuggestions;
@property (nonatomic, readonly, copy) NSString *merchantID;
@property (getter=isPurchaseBased, nonatomic, readonly) bool purchaseBased;
@property (nonatomic, readonly, copy) NSArray *serviceProviderAcceptedNetworks;
@property (nonatomic, readonly, copy) NSArray *serviceProviderCapabilities;
@property (nonatomic, readonly, copy) NSString *serviceProviderCountryCode;
@property (nonatomic, readonly, copy) NSDictionary *serviceProviderDict;
@property (nonatomic, readonly, copy) NSString *serviceProviderIdentifier;
@property (nonatomic, readonly, copy) NSArray *serviceProviderProducts;
@property (nonatomic, readonly, copy) NSString *serviceProviderProductsLocalizedDescription;
@property (nonatomic, readonly, copy) NSString *serviceProviderProductsLocalizedDisplayName;
@property (nonatomic, readonly, copy) NSSet *serviceProviderSupportedCountries;
@property (nonatomic, readonly, copy) NSArray *serviceProviderSupportedNetworks;

- (void).cxx_destruct;
- (id)action;
- (id)autoTopUpProduct;
- (id)balanceIdentifier;
- (id)balanceLocalizedDescription;
- (id)balanceLocalizedDisplayName;
- (id)defaultSuggestions;
- (id)initWithDictionary:(id)arg1;
- (bool)isPurchaseBased;
- (id)merchantID;
- (id)serviceProviderAcceptedNetworks;
- (id)serviceProviderCapabilities;
- (id)serviceProviderCountryCode;
- (id)serviceProviderDict;
- (id)serviceProviderIdentifier;
- (id)serviceProviderProducts;
- (id)serviceProviderProductsLocalizedDescription;
- (id)serviceProviderProductsLocalizedDisplayName;
- (id)serviceProviderSupportedCountries;
- (id)serviceProviderSupportedNetworks;

@end
