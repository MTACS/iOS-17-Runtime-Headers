
@interface HDCodableOntologyLocalizedEducationContentSection : PBCodable <NSCopying> {
    struct { 
        unsigned int sectionType : 1; 
    }  _has;
    NSMutableArray * _sectionDatas;
    long long  _sectionType;
}

@property (nonatomic) bool hasSectionType;
@property (nonatomic, retain) NSMutableArray *sectionDatas;
@property (nonatomic) long long sectionType;

+ (Class)sectionDataType;

- (void).cxx_destruct;
- (void)addSectionData:(id)arg1;
- (void)clearSectionDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionDataAtIndex:(unsigned long long)arg1;
- (id)sectionDatas;
- (unsigned long long)sectionDatasCount;
- (long long)sectionType;
- (void)setHasSectionType:(bool)arg1;
- (void)setSectionDatas:(id)arg1;
- (void)setSectionType:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
