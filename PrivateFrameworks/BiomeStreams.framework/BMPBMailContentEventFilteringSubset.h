
@interface BMPBMailContentEventFilteringSubset : PBCodable <NSCopying> {
    NSString * _domainId;
    NSString * _personaId;
    NSString * _uniqueId;
}

@property (nonatomic, retain) NSString *domainId;
@property (nonatomic, readonly) bool hasDomainId;
@property (nonatomic, readonly) bool hasPersonaId;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, retain) NSString *personaId;
@property (nonatomic, retain) NSString *uniqueId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainId;
- (bool)hasDomainId;
- (bool)hasPersonaId;
- (bool)hasUniqueId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)personaId;
- (bool)readFrom:(id)arg1;
- (void)setDomainId:(id)arg1;
- (void)setPersonaId:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
