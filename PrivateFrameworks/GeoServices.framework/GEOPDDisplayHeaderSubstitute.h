
@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying> {
    struct { 
        unsigned int has_substituteType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_interpretedQuery : 1; 
        unsigned int read_relatedSearchSuggestion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _interpretedQuery;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRelatedSearchSuggestion * _relatedSearchSuggestion;
    int  _substituteType;
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
