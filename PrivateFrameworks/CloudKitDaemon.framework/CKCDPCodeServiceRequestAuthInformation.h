
@interface CKCDPCodeServiceRequestAuthInformation : PBCodable <NSCopying> {
    NSString * _accountServiceSignedToken;
}

@property (nonatomic, retain) NSString *accountServiceSignedToken;
@property (nonatomic, readonly) bool hasAccountServiceSignedToken;

- (void).cxx_destruct;
- (id)accountServiceSignedToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountServiceSignedToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountServiceSignedToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
