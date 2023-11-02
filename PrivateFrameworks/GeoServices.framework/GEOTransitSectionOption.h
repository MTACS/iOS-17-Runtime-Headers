
@interface GEOTransitSectionOption : PBCodable <NSCopying> {
    unsigned int  _defaultSectionIndex;
    struct { 
        unsigned int has_defaultSectionIndex : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _sections;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int defaultSectionIndex;
@property (nonatomic) bool hasDefaultSectionIndex;
@property (nonatomic, readonly) unsigned int*sections;
@property (nonatomic, readonly) unsigned long long sectionsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addSection:(unsigned int)arg1;
- (void)clearSections;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)defaultSectionIndex;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultSectionIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)sectionAtIndex:(unsigned long long)arg1;
- (unsigned int*)sections;
- (unsigned long long)sectionsCount;
- (void)setDefaultSectionIndex:(unsigned int)arg1;
- (void)setHasDefaultSectionIndex:(bool)arg1;
- (void)setSections:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
