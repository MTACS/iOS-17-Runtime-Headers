
@interface PDSProtoUserPushToken : PBCodable <NSCopying> {
    NSString * _pushToken;
    PDSProtoUserAuth * _userAuth;
    NSString * _userId;
}

@property (nonatomic, readonly) bool hasUserAuth;
@property (nonatomic, retain) NSString *pushToken;
@property (nonatomic, retain) PDSProtoUserAuth *userAuth;
@property (nonatomic, retain) NSString *userId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserAuth;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pushToken;
- (bool)readFrom:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setUserAuth:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userAuth;
- (id)userId;
- (void)writeTo:(id)arg1;

@end
