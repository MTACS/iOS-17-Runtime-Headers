
@interface NPKProtoStandaloneCreditAccountCredential : PBCodable <NSCopying> {
    double  _creditLimit;
    NSString * _currencyCode;
    double  _currentBalance;
    struct { 
        unsigned int creditLimit : 1; 
        unsigned int currentBalance : 1; 
    }  _has;
    NPKProtoStandalonePaymentCredential * _paymentCredential;
    NPKProtoStandalonePaymentPass * _paymentPass;
}

@property (nonatomic) double creditLimit;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) double currentBalance;
@property (nonatomic) bool hasCreditLimit;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic) bool hasCurrentBalance;
@property (nonatomic, readonly) bool hasPaymentPass;
@property (nonatomic, retain) NPKProtoStandalonePaymentCredential *paymentCredential;
@property (nonatomic, retain) NPKProtoStandalonePaymentPass *paymentPass;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creditLimit;
- (id)currencyCode;
- (double)currentBalance;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreditLimit;
- (bool)hasCurrencyCode;
- (bool)hasCurrentBalance;
- (bool)hasPaymentPass;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentCredential;
- (id)paymentPass;
- (bool)readFrom:(id)arg1;
- (void)setCreditLimit:(double)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrentBalance:(double)arg1;
- (void)setHasCreditLimit:(bool)arg1;
- (void)setHasCurrentBalance:(bool)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)writeTo:(id)arg1;

@end
