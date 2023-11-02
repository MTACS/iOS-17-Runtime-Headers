
@interface GEOPDRelatedPlaceModuleConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int has_numberOfRows : 1; 
        unsigned int has_relatedPlaceComponentId : 1; 
    }  _flags;
    int  _numberOfRows;
    int  _relatedPlaceComponentId;
    NSMutableArray * _sectionTitles;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
