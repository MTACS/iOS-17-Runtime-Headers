
@interface NPKProtoAcceptCarKeyShareForMessageWithActivationCodeRequest : PBRequest <NSCopying> {
    NSString * _activationCode;
    NSData * _sharingMessageData;
}

@property (nonatomic, retain) NSString *activationCode;
@property (nonatomic, readonly) bool hasActivationCode;
@property (nonatomic, retain) NSData *sharingMessageData;

- (void).cxx_destruct;
- (id)activationCode;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivationCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivationCode:(id)arg1;
- (void)setSharingMessageData:(id)arg1;
- (id)sharingMessageData;
- (void)writeTo:(id)arg1;

@end
