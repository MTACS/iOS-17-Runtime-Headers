
@interface TPPBPolicySecret : PBCodable <NSCopying> {
    NSString * _name;
    NSData * _secret;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSecret;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSData *secret;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasSecret;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (id)secret;
- (void)setName:(id)arg1;
- (void)setSecret:(id)arg1;
- (void)writeTo:(id)arg1;

@end
