
@interface GEOPDRelatedEntitySection : PBCodable <NSCopying> {
    struct { 
        unsigned int has_index : 1; 
        unsigned int has_sectionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_name : 1; 
        unsigned int read_relatedCollectionSection : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _index;
    NSString * _name;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRelatedCollectionSection * _relatedCollectionSection;
    int  _sectionType;
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
