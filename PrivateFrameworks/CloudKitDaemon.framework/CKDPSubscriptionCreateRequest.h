
@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying> {
    CKDPSubscription * _subscription;
}

@property (nonatomic, readonly) bool hasSubscription;
@property (nonatomic, retain) CKDPSubscription *subscription;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSubscription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setSubscription:(id)arg1;
- (id)subscription;
- (void)writeTo:(id)arg1;

@end
