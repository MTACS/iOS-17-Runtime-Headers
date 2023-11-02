
@interface NPKProtoPaymentWebServiceRegistrationRequest : PBRequest <NSCopying> {
    NSString * _brokerURLString;
    NSString * _reason;
}

@property (nonatomic, retain) NSString *brokerURLString;
@property (nonatomic, readonly) bool hasBrokerURLString;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic, retain) NSString *reason;

- (void).cxx_destruct;
- (id)brokerURLString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrokerURLString;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setBrokerURLString:(id)arg1;
- (void)setReason:(id)arg1;
- (void)writeTo:(id)arg1;

@end
