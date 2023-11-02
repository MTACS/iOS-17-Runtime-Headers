
@interface GEOPBOfflineDataKeyValueReference : PBCodable <NSCopying> {
    struct { 
        unsigned int has_valueCompressedSizeBytes : 1; 
        unsigned int has_valueSizeBytes : 1; 
        unsigned int read_serviceKey : 1; 
        unsigned int read_url : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSData * _serviceKey;
    NSString * _url;
    unsigned long long  _valueCompressedSizeBytes;
    unsigned long long  _valueSizeBytes;
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
