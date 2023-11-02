
@interface NPKProtoRemotePassActionEnterValueRequest : PBRequest <NSCopying> {
    NSString * _balanceIdentifier;
    NSString * _balanceLabel;
    long long  _currentBalanceAmount;
    NSString * _currentBalanceCurrency;
    NSData * _paymentPassActionData;
    NSString * _requestUniqueID;
}

@property (nonatomic, retain) NSString *balanceIdentifier;
@property (nonatomic, retain) NSString *balanceLabel;
@property (nonatomic) long long currentBalanceAmount;
@property (nonatomic, retain) NSString *currentBalanceCurrency;
@property (nonatomic, readonly) bool hasPaymentPassActionData;
@property (nonatomic, retain) NSData *paymentPassActionData;
@property (nonatomic, retain) NSString *requestUniqueID;

- (void).cxx_destruct;
- (id)balanceIdentifier;
- (id)balanceLabel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentBalanceAmount;
- (id)currentBalanceCurrency;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentPassActionData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentPassActionData;
- (bool)readFrom:(id)arg1;
- (id)requestUniqueID;
- (void)setBalanceIdentifier:(id)arg1;
- (void)setBalanceLabel:(id)arg1;
- (void)setCurrentBalanceAmount:(long long)arg1;
- (void)setCurrentBalanceCurrency:(id)arg1;
- (void)setPaymentPassActionData:(id)arg1;
- (void)setRequestUniqueID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
