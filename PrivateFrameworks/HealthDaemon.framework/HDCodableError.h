
@interface HDCodableError : PBCodable <NSCopying> {
    long long  _code;
    NSString * _domain;
    struct { 
        unsigned int code : 1; 
    }  _has;
    NSString * _localizedDescription;
}

@property (nonatomic) long long code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasLocalizedDescription;
@property (nonatomic, retain) NSString *localizedDescription;

- (void).cxx_destruct;
- (long long)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCode;
- (bool)hasDomain;
- (bool)hasLocalizedDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(long long)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)writeTo:(id)arg1;

@end