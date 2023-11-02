
@interface NPKProtoRemotePassActionSelectItemRequest : PBRequest <NSCopying> {
    NSString * _deviceIdentifier;
    NSData * _expiryDateData;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    NSData * _paymentPassActionData;
    NSString * _planDetailLabel;
    NSString * _planIdentifier;
    NSString * _planLabel;
    NSString * _requestUniqueID;
    NSData * _startDateData;
}

@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSData *expiryDateData;
@property (nonatomic, readonly) bool hasDeviceIdentifier;
@property (nonatomic, readonly) bool hasExpiryDateData;
@property (nonatomic, readonly) bool hasPassSerialNumber;
@property (nonatomic, readonly) bool hasPassTypeIdentifier;
@property (nonatomic, readonly) bool hasPaymentPassActionData;
@property (nonatomic, readonly) bool hasPlanDetailLabel;
@property (nonatomic, readonly) bool hasPlanIdentifier;
@property (nonatomic, readonly) bool hasPlanLabel;
@property (nonatomic, readonly) bool hasStartDateData;
@property (nonatomic, retain) NSString *passSerialNumber;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSData *paymentPassActionData;
@property (nonatomic, retain) NSString *planDetailLabel;
@property (nonatomic, retain) NSString *planIdentifier;
@property (nonatomic, retain) NSString *planLabel;
@property (nonatomic, retain) NSString *requestUniqueID;
@property (nonatomic, retain) NSData *startDateData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (id)dictionaryRepresentation;
- (id)expiryDateData;
- (bool)hasDeviceIdentifier;
- (bool)hasExpiryDateData;
- (bool)hasPassSerialNumber;
- (bool)hasPassTypeIdentifier;
- (bool)hasPaymentPassActionData;
- (bool)hasPlanDetailLabel;
- (bool)hasPlanIdentifier;
- (bool)hasPlanLabel;
- (bool)hasStartDateData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)paymentPassActionData;
- (id)planDetailLabel;
- (id)planIdentifier;
- (id)planLabel;
- (bool)readFrom:(id)arg1;
- (id)requestUniqueID;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setExpiryDateData:(id)arg1;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPaymentPassActionData:(id)arg1;
- (void)setPlanDetailLabel:(id)arg1;
- (void)setPlanIdentifier:(id)arg1;
- (void)setPlanLabel:(id)arg1;
- (void)setRequestUniqueID:(id)arg1;
- (void)setStartDateData:(id)arg1;
- (id)startDateData;
- (void)writeTo:(id)arg1;

@end
