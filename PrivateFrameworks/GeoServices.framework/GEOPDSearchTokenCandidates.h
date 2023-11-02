
@interface GEOPDSearchTokenCandidates : PBCodable <NSCopying> {
    NSMutableArray * _candidates;
    struct { 
        unsigned int has_isMerged : 1; 
        unsigned int has_isSplit : 1; 
        unsigned int read_candidates : 1; 
        unsigned int read_token : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isMerged;
    bool  _isSplit;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchTokenSet * _token;
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
