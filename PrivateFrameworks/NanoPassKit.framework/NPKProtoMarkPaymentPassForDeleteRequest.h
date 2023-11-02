
@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying> {
    NSString * _passID;
    NSMutableArray * _paymentApplicationAIDs;
}

@property (nonatomic, retain) NSString *passID;
@property (nonatomic, retain) NSMutableArray *paymentApplicationAIDs;

+ (Class)paymentApplicationAIDsType;

- (void).cxx_destruct;
- (void)addPaymentApplicationAIDs:(id)arg1;
- (void)clearPaymentApplicationAIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (id)paymentApplicationAIDs;
- (id)paymentApplicationAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentApplicationAIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)setPaymentApplicationAIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
