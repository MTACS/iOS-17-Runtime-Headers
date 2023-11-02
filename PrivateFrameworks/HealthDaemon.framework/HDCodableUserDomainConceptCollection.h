
@interface HDCodableUserDomainConceptCollection : PBCodable <NSCopying> {
    NSMutableArray * _concepts;
}

@property (nonatomic, retain) NSMutableArray *concepts;

+ (Class)conceptsType;

- (void).cxx_destruct;
- (void)addConcepts:(id)arg1;
- (void)clearConcepts;
- (id)concepts;
- (id)conceptsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conceptsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConcepts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
