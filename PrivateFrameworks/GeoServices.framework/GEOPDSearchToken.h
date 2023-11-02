
@interface GEOPDSearchToken : PBCodable <NSCopying> {
    NSMutableArray * _alternateForms;
    struct { 
        unsigned int has_position : 1; 
        unsigned int read_alternateForms : 1; 
        unsigned int read_processedValue : 1; 
        unsigned int read_rawValue : 1; 
        unsigned int read_tokenSpan : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _position;
    NSString * _processedValue;
    NSString * _rawValue;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchTokenSpan * _tokenSpan;
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
