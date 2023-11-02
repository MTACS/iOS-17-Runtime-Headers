
@interface NSSAccountsInfoReqMsg : PBCodable <NSCopying> {
    NSString * _accountType;
}

@property (nonatomic, retain) NSString *accountType;
@property (nonatomic, readonly) bool hasAccountType;

- (void).cxx_destruct;
- (id)accountType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccountType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
