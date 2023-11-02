
@interface PBBProtoSendBuysOnWatchCredentials : PBCodable <NSCopying> {
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, readonly) bool hasPassword;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassword;
- (bool)hasUsername;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)password;
- (bool)readFrom:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)writeTo:(id)arg1;

@end
