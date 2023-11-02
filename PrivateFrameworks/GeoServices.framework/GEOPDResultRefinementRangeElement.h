
@interface GEOPDResultRefinementRangeElement : PBCodable <NSCopying> {
    NSString * _displayName;
    struct { 
        unsigned int has_value : 1; 
        unsigned int has_valueType : 1; 
        unsigned int has_isEnabled : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayName : 1; 
        unsigned int read_refinementKey : 1; 
        unsigned int read_stringValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isEnabled;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _refinementKey;
    NSString * _stringValue;
    PBUnknownFields * _unknownFields;
    double  _value;
    int  _valueType;
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
