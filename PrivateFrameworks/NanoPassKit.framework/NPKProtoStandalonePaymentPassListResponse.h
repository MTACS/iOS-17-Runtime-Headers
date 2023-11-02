
@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying> {
    NSMutableArray * _paymentPasses;
    NPKProtoStandaloneResponseHeader * _responseHeader;
}

@property (nonatomic, retain) NSMutableArray *paymentPasses;
@property (nonatomic, retain) NPKProtoStandaloneResponseHeader *responseHeader;

+ (Class)paymentPassesType;

- (void).cxx_destruct;
- (void)addPaymentPasses:(id)arg1;
- (void)clearPaymentPasses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentPasses;
- (id)paymentPassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentPassesCount;
- (bool)readFrom:(id)arg1;
- (id)responseHeader;
- (void)setPaymentPasses:(id)arg1;
- (void)setResponseHeader:(id)arg1;
- (void)writeTo:(id)arg1;

@end
