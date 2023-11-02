
@interface NPKProtoStandalonePaymentRemoteCredential : PBCodable <NSCopying> {
    struct { 
        unsigned int rank : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _passURL;
    NPKProtoStandalonePaymentCredential * _paymentCredential;
    NPKProtoStandalonePaymentPass * _paymentPass;
    NSString * _productIdentifier;
    unsigned int  _rank;
    NSString * _statusDescription;
    NSString * _summaryMetadataDescription;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPassURL;
@property (nonatomic, readonly) bool hasPaymentPass;
@property (nonatomic, readonly) bool hasProductIdentifier;
@property (nonatomic) bool hasRank;
@property (nonatomic, readonly) bool hasStatusDescription;
@property (nonatomic, readonly) bool hasSummaryMetadataDescription;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *passURL;
@property (nonatomic, retain) NPKProtoStandalonePaymentCredential *paymentCredential;
@property (nonatomic, retain) NPKProtoStandalonePaymentPass *paymentPass;
@property (nonatomic, retain) NSString *productIdentifier;
@property (nonatomic) unsigned int rank;
@property (nonatomic, retain) NSString *statusDescription;
@property (nonatomic, retain) NSString *summaryMetadataDescription;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasPassURL;
- (bool)hasPaymentPass;
- (bool)hasProductIdentifier;
- (bool)hasRank;
- (bool)hasStatusDescription;
- (bool)hasSummaryMetadataDescription;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passURL;
- (id)paymentCredential;
- (id)paymentPass;
- (id)productIdentifier;
- (unsigned int)rank;
- (bool)readFrom:(id)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setSummaryMetadataDescription:(id)arg1;
- (id)statusDescription;
- (id)summaryMetadataDescription;
- (void)writeTo:(id)arg1;

@end
