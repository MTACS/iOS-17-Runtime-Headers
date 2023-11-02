
@interface GEOPDAutocompleteResultSortPriorityMapping : PBCodable <NSCopying> {
    struct { 
        unsigned int has_resultSubtype : 1; 
        unsigned int has_resultType : 1; 
        unsigned int has_sortPriority : 1; 
    }  _flags;
    int  _resultSubtype;
    int  _resultType;
    int  _sortPriority;
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
