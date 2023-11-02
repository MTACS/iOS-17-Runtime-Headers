
@interface HKCodableHealthRecordsLocalizedEducationContent : PBCodable <NSCopying> {
    NSMutableArray * _sections;
}

@property (nonatomic, retain) NSMutableArray *sections;

+ (Class)sectionsType;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setSections:(id)arg1;
- (void)writeTo:(id)arg1;

@end
