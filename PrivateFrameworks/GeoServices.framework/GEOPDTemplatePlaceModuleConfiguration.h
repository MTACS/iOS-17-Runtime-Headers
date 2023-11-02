
@interface GEOPDTemplatePlaceModuleConfiguration : PBCodable <NSCopying> {
    struct { 
        unsigned int has_layoutType : 1; 
        unsigned int has_numberOfRows : 1; 
        unsigned int has_orientation : 1; 
        unsigned int has_templatePlaceComponentId : 1; 
    }  _flags;
    int  _layoutType;
    int  _numberOfRows;
    int  _orientation;
    NSMutableArray * _sectionTitles;
    int  _templatePlaceComponentId;
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
- (id)sectionTitle;
- (void)writeTo:(id)arg1;

@end
