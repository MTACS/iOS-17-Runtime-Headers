
@interface PKDisbursementRequest : NSObject {
    NSData * _applicationData;
    NSString * _currencyCode;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantIdentifier;
    PKContact * _recipientContact;
    NSString * _regionCode;
    NSArray * _requiredRecipientContactFields;
    NSArray * _summaryItems;
    NSArray * _supportedNetworks;
    NSArray * _supportedRegions;
}

@property (nonatomic, copy) NSData *applicationData;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) unsigned long long merchantCapabilities;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, retain) PKContact *recipientContact;
@property (nonatomic, copy) NSString *regionCode;
@property (nonatomic, retain) NSArray *requiredRecipientContactFields;
@property (nonatomic, copy) NSArray *summaryItems;
@property (nonatomic, copy) NSArray *supportedNetworks;
@property (nonatomic, copy) NSArray *supportedRegions;

+ (id)disbursementCardUnsupportedError;
+ (id)disbursementContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;

- (void).cxx_destruct;
- (id)applicationData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMerchantIdentifier:(id)arg1 currencyCode:(id)arg2 regionCode:(id)arg3 supportedNetworks:(id)arg4 merchantCapabilities:(unsigned long long)arg5 summaryItems:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisbursementRequest:(id)arg1;
- (unsigned long long)merchantCapabilities;
- (id)merchantIdentifier;
- (id)recipientContact;
- (id)regionCode;
- (id)requiredRecipientContactFields;
- (void)setApplicationData:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMerchantCapabilities:(unsigned long long)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setRecipientContact:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)setRequiredRecipientContactFields:(id)arg1;
- (void)setSummaryItems:(id)arg1;
- (void)setSupportedNetworks:(id)arg1;
- (void)setSupportedRegions:(id)arg1;
- (id)summaryItems;
- (id)supportedNetworks;
- (id)supportedRegions;

@end
