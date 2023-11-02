
@interface PKPaymentSetupFeature : NSObject <NSCopying, NSSecureCoding> {
    NSString * _dirtyStateIdentifier;
    NSString * _discoveryCardIdentifier;
    NSDate * _expiry;
    unsigned long long  _featureIdentifier;
    NSSet * _identifiers;
    NSDate * _lastUpdated;
    NSString * _localizedDisplayName;
    NSString * _notificationMessage;
    NSString * _notificationTitle;
    NSString * _partnerIdentifier;
    NSString * _productIdentifier;
    unsigned long long  _productState;
    unsigned long long  _productType;
    long long  _state;
    long long  _supportedDevices;
    long long  _supportedOptions;
    long long  _type;
}

@property (nonatomic, copy) NSString *dirtyStateIdentifier;
@property (nonatomic, copy) NSString *discoveryCardIdentifier;
@property (nonatomic, retain) NSDate *expiry;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, copy) NSSet *identifiers;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSString *notificationMessage;
@property (nonatomic, copy) NSString *notificationTitle;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) unsigned long long productState;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) long long state;
@property (nonatomic) long long supportedDevices;
@property (nonatomic) long long supportedOptions;
@property (nonatomic) long long type;

+ (id)paymentSetupFeatureWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dirtyStateIdentifier;
- (id)discoveryCardIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)expiry;
- (unsigned long long)featureIdentifier;
- (unsigned long long)hash;
- (id)identifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 localizedDisplayName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastUpdated;
- (id)localizedDisplayName;
- (id)notificationMessage;
- (id)notificationTitle;
- (id)partnerIdentifier;
- (id)productIdentifier;
- (unsigned long long)productState;
- (unsigned long long)productType;
- (id)protobuf;
- (void)sanitizePaymentSetupFeature;
- (void)setDirtyStateIdentifier:(id)arg1;
- (void)setDiscoveryCardIdentifier:(id)arg1;
- (void)setExpiry:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setNotificationMessage:(id)arg1;
- (void)setNotificationTitle:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setProductState:(unsigned long long)arg1;
- (void)setProductType:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportedDevices:(long long)arg1;
- (void)setSupportedOptions:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (long long)supportedDevices;
- (long long)supportedOptions;
- (long long)type;

@end
