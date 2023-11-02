
@interface NPKProtoStandalonePaymentDigitalIssuanceMetadata : PBCodable <NSCopying> {
    NSString * _action;
    NSMutableArray * _defaultSuggestions;
    NSString * _merchantID;
    NSMutableArray * _serviceProviderAcceptedNetworks;
    NSMutableArray * _serviceProviderCapabilities;
    NSString * _serviceProviderCountryCode;
    NSString * _serviceProviderDictJson;
    NSString * _serviceProviderIdentifier;
}

@property (nonatomic, retain) NSString *action;
@property (nonatomic, retain) NSMutableArray *defaultSuggestions;
@property (nonatomic, readonly) bool hasAction;
@property (nonatomic, readonly) bool hasMerchantID;
@property (nonatomic, readonly) bool hasServiceProviderCountryCode;
@property (nonatomic, readonly) bool hasServiceProviderDictJson;
@property (nonatomic, readonly) bool hasServiceProviderIdentifier;
@property (nonatomic, retain) NSString *merchantID;
@property (nonatomic, retain) NSMutableArray *serviceProviderAcceptedNetworks;
@property (nonatomic, retain) NSMutableArray *serviceProviderCapabilities;
@property (nonatomic, retain) NSString *serviceProviderCountryCode;
@property (nonatomic, retain) NSString *serviceProviderDictJson;
@property (nonatomic, retain) NSString *serviceProviderIdentifier;

+ (Class)defaultSuggestionsType;
+ (Class)serviceProviderAcceptedNetworksType;
+ (Class)serviceProviderCapabilitiesType;

- (void).cxx_destruct;
- (id)action;
- (void)addDefaultSuggestions:(id)arg1;
- (void)addServiceProviderAcceptedNetworks:(id)arg1;
- (void)addServiceProviderCapabilities:(id)arg1;
- (void)clearDefaultSuggestions;
- (void)clearServiceProviderAcceptedNetworks;
- (void)clearServiceProviderCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultSuggestions;
- (id)defaultSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultSuggestionsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasMerchantID;
- (bool)hasServiceProviderCountryCode;
- (bool)hasServiceProviderDictJson;
- (bool)hasServiceProviderIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)merchantID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceProviderAcceptedNetworks;
- (id)serviceProviderAcceptedNetworksAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceProviderAcceptedNetworksCount;
- (id)serviceProviderCapabilities;
- (id)serviceProviderCapabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceProviderCapabilitiesCount;
- (id)serviceProviderCountryCode;
- (id)serviceProviderDictJson;
- (id)serviceProviderIdentifier;
- (void)setAction:(id)arg1;
- (void)setDefaultSuggestions:(id)arg1;
- (void)setMerchantID:(id)arg1;
- (void)setServiceProviderAcceptedNetworks:(id)arg1;
- (void)setServiceProviderCapabilities:(id)arg1;
- (void)setServiceProviderCountryCode:(id)arg1;
- (void)setServiceProviderDictJson:(id)arg1;
- (void)setServiceProviderIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
