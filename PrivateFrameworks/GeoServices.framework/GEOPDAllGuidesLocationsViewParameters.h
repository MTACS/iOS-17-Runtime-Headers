
@interface GEOPDAllGuidesLocationsViewParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_numClientizedResults : 1; 
    }  _flags;
    unsigned int  _numClientizedResults;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
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
