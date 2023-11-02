
@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding> {
    long long  _authenticationType;
    NSString * _barcodeIdentifier;
    bool  _biometricsChanged;
    NSString * _deviceAccountIdentifier;
    NSData * _eventMetadata;
    unsigned long long  _eventType;
    NSDate * _timestamp;
    long long  _version;
}

@property (nonatomic) long long authenticationType;
@property (nonatomic, copy) NSString *barcodeIdentifier;
@property (nonatomic) bool biometricsChanged;
@property (nonatomic, copy) NSString *deviceAccountIdentifier;
@property (nonatomic, copy) NSData *eventMetadata;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)authenticationType;
- (id)barcodeIdentifier;
- (bool)biometricsChanged;
- (id)data;
- (id)deviceAccountIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)eventMetadata;
- (unsigned long long)eventType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBarcodePaymentEvent:(id)arg1;
- (void)setAuthenticationType:(long long)arg1;
- (void)setBarcodeIdentifier:(id)arg1;
- (void)setBiometricsChanged:(bool)arg1;
- (void)setDeviceAccountIdentifier:(id)arg1;
- (void)setEventMetadata:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (long long)version;

@end
