
@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray * _subscriptions;
}

@property (nonatomic, retain) NSMutableArray *subscriptions;

+ (Class)subscriptionsType;

- (void).cxx_destruct;
- (void)addSubscriptions:(id)arg1;
- (void)clearSubscriptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptions;
- (id)subscriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscriptionsCount;
- (void)writeTo:(id)arg1;

@end
