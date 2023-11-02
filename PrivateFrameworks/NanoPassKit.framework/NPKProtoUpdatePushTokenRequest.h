
@interface NPKProtoUpdatePushTokenRequest : PBRequest <NSCopying> {
    NSString * _pushToken;
}

@property (nonatomic, readonly) bool hasPushToken;
@property (nonatomic, retain) NSString *pushToken;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPushToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pushToken;
- (bool)readFrom:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end