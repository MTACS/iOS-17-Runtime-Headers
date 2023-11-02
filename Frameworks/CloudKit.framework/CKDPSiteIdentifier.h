
@interface CKDPSiteIdentifier : PBCodable <NSCopying> {
    NSData * _identifier;
    NSData * _modifier;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasModifier;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic, retain) NSData *modifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasModifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifier;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
