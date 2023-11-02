
@interface GEOPDGuidesHomeResultFilter : PBCodable <NSCopying> {
    GEOPDGuidesHomeResultFilterTypeConcept * _filterConcept;
    int  _filterType;
    struct { 
        unsigned int has_filterType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_filterConcept : 1; 
        unsigned int read_subFilters : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _subFilters;
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
