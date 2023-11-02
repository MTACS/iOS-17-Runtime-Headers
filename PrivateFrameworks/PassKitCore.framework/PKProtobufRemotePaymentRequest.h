
@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int paymentType : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _paymentApplicationIdentifier;
    PKProtobufPaymentRequest * _paymentRequest;
    unsigned int  _paymentType;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPaymentApplicationIdentifier;
@property (nonatomic, readonly) bool hasPaymentRequest;
@property (nonatomic) bool hasPaymentType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *paymentApplicationIdentifier;
@property (nonatomic, retain) PKProtobufPaymentRequest *paymentRequest;
@property (nonatomic) unsigned int paymentType;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasPaymentApplicationIdentifier;
- (bool)hasPaymentRequest;
- (bool)hasPaymentType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentApplicationIdentifier;
- (id)paymentRequest;
- (unsigned int)paymentType;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasPaymentType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPaymentApplicationIdentifier:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)setPaymentType:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
