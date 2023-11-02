
@interface NPKProtoStandaloneError : PBCodable <NSCopying> {
    long long  _code;
    NSString * _domain;
    NSMutableArray * _userInfos;
}

@property (nonatomic) long long code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, retain) NSMutableArray *userInfos;

+ (Class)userInfosType;

- (void).cxx_destruct;
- (void)addUserInfos:(id)arg1;
- (void)clearUserInfos;
- (long long)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setUserInfos:(id)arg1;
- (id)userInfos;
- (id)userInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfosCount;
- (void)writeTo:(id)arg1;

@end
