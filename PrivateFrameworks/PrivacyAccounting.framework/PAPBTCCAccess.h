
@interface PAPBTCCAccess : PBCodable <NSCopying> {
    PAPBAccess * _access;
    NSString * _tccService;
}

@property (nonatomic, retain) PAPBAccess *access;
@property (nonatomic, readonly) bool hasAccess;
@property (nonatomic, readonly) bool hasTccService;
@property (nonatomic, retain) NSString *tccService;

- (void).cxx_destruct;
- (id)access;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccess;
- (bool)hasTccService;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)setTccService:(id)arg1;
- (id)tccService;
- (void)writeTo:(id)arg1;

@end
