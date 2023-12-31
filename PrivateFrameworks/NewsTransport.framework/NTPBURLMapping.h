
@interface NTPBURLMapping : PBCodable <NSCopying> {
    NSMutableArray * _domains;
}

@property (nonatomic, retain) NSMutableArray *domains;

+ (Class)domainsType;

- (void).cxx_destruct;
- (void)addDomains:(id)arg1;
- (void)clearDomains;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domains;
- (id)domainsAtIndex:(unsigned long long)arg1;
- (unsigned long long)domainsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDomains:(id)arg1;
- (void)writeTo:(id)arg1;

@end
