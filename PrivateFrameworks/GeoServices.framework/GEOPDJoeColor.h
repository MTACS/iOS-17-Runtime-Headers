
@interface GEOPDJoeColor : PBCodable <NSCopying> {
    NSString * _backgroundColor;
    bool  _curated;
    struct { 
        unsigned int has_curated : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_backgroundColor : 1; 
        unsigned int read_primaryTextColor : 1; 
        unsigned int read_quaternaryTextColor : 1; 
        unsigned int read_secondaryTextColor : 1; 
        unsigned int read_tertiaryTextColor : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _primaryTextColor;
    NSString * _quaternaryTextColor;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _secondaryTextColor;
    NSString * _tertiaryTextColor;
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
