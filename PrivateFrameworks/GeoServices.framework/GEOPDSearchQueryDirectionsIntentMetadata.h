
@interface GEOPDSearchQueryDirectionsIntentMetadata : PBCodable <NSCopying> {
    NSString * _directionPhrase;
    struct { 
        unsigned int has_intentType : 1; 
        unsigned int has_preposition1 : 1; 
        unsigned int has_preposition2 : 1; 
        unsigned int has_type : 1; 
        unsigned int read_directionPhrase : 1; 
        unsigned int read_place1 : 1; 
        unsigned int read_place2 : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _intentType;
    NSString * _place1;
    NSString * _place2;
    int  _preposition1;
    int  _preposition2;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
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
