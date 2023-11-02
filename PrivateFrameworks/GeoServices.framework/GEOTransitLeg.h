
@interface GEOTransitLeg : PBCodable <NSCopying> {
    struct { 
        unsigned int has_sectionOptionIndex : 1; 
    }  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _restrictedToSectionIndexs;
    int  _sectionOptionIndex;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSectionOptionIndex;
@property (nonatomic, readonly) int*restrictedToSectionIndexs;
@property (nonatomic, readonly) unsigned long long restrictedToSectionIndexsCount;
@property (nonatomic) int sectionOptionIndex;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addRestrictedToSectionIndex:(int)arg1;
- (void)clearRestrictedToSectionIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionOptionIndex;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1;
- (int*)restrictedToSectionIndexs;
- (unsigned long long)restrictedToSectionIndexsCount;
- (int)sectionOptionIndex;
- (void)setHasSectionOptionIndex:(bool)arg1;
- (void)setRestrictedToSectionIndexs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSectionOptionIndex:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
