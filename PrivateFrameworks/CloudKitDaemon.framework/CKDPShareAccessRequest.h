
@interface CKDPShareAccessRequest : PBRequest <NSCopying> {
    NSString * _routingKey;
    NSData * _shortTokenHash;
    CKDPUserInformationRequestAccess * _userInformationRequestAccess;
}

@property (nonatomic, readonly) bool hasRoutingKey;
@property (nonatomic, readonly) bool hasShortTokenHash;
@property (nonatomic, readonly) bool hasUserInformationRequestAccess;
@property (nonatomic, retain) NSString *routingKey;
@property (nonatomic, retain) NSData *shortTokenHash;
@property (nonatomic, retain) CKDPUserInformationRequestAccess *userInformationRequestAccess;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoutingKey;
- (bool)hasShortTokenHash;
- (bool)hasUserInformationRequestAccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingKey;
- (void)setRoutingKey:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (void)setUserInformationRequestAccess:(id)arg1;
- (id)shortTokenHash;
- (id)userInformationRequestAccess;
- (void)writeTo:(id)arg1;

@end
