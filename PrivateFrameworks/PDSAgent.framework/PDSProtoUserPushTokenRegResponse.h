
@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying> {
    NSString * _message;
    int  _status;
    PDSProtoUserPushToken * _userPushToken;
}

@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) int status;
@property (nonatomic, retain) PDSProtoUserPushToken *userPushToken;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setUserPushToken:(id)arg1;
- (int)status;
- (id)userPushToken;
- (void)writeTo:(id)arg1;

@end
