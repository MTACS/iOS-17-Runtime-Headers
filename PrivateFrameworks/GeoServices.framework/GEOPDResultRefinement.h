
@interface GEOPDResultRefinement : PBCodable <NSCopying> {
    struct { 
        unsigned int has_resultRefinementType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_guidesHome : 1; 
        unsigned int read_multiSelect : 1; 
        unsigned int read_range : 1; 
        unsigned int read_sort : 1; 
        unsigned int read_toggle : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDResultRefinementGuidesHome * _guidesHome;
    GEOPDResultRefinementMultiSelect * _multiSelect;
    GEOPDResultRefinementRange * _range;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _resultRefinementType;
    GEOPDResultRefinementSort * _sort;
    GEOPDResultRefinementToggle * _toggle;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
