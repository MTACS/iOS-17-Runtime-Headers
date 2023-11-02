
@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying> {
    NSString * _dirtyStateIdentifier;
    NSString * _discoveryCardIdentifier;
    unsigned long long  _featureIdentifier;
    NSDate * _lastUpdated;
    NSString * _notificationMessage;
    NSString * _notificationTitle;
    NSString * _partnerIdentifier;
    NSString * _productIdentifier;
    unsigned long long  _state;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *dirtyStateIdentifier;
@property (nonatomic, copy) NSString *discoveryCardIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, copy) NSString *notificationMessage;
@property (nonatomic, copy) NSString *notificationTitle;
@property (nonatomic, copy) NSString *partnerIdentifier;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dirtyStateIdentifier;
- (id)discoveryCardIdentifier;
- (unsigned long long)featureIdentifier;
- (id)initWithProductDictionary:(id)arg1;
- (id)lastUpdated;
- (id)notificationMessage;
- (id)notificationTitle;
- (id)partnerIdentifier;
- (id)productIdentifier;
- (void)setDirtyStateIdentifier:(id)arg1;
- (void)setDiscoveryCardIdentifier:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setNotificationMessage:(id)arg1;
- (void)setNotificationTitle:(id)arg1;
- (void)setPartnerIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)state;
- (unsigned long long)type;

@end
