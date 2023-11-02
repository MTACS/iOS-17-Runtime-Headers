
@interface CKDPResponseOperationResultErrorAuxiliaryError : PBCodable <NSCopying> {
    int  _code;
    NSString * _domain;
    struct { 
        unsigned int code : 1; 
    }  _has;
    NSMutableArray * _userInfos;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, retain) NSMutableArray *userInfos;

+ (Class)userInfoType;

- (void).cxx_destruct;
- (void)addUserInfo:(id)arg1;
- (void)clearUserInfos;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCode;
- (bool)hasDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setUserInfos:(id)arg1;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (id)userInfos;
- (unsigned long long)userInfosCount;
- (void)writeTo:(id)arg1;

@end
