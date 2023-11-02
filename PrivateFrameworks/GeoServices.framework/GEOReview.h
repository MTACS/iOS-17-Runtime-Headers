
@interface GEOReview : PBCodable <NSCopying> {
    struct { 
        unsigned int has_reviewTime : 1; 
        unsigned int has_score : 1; 
        unsigned int has_isChinaSuppressed : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_languageCode : 1; 
        unsigned int read_reviewer : 1; 
        unsigned int read_snippet : 1; 
        unsigned int read_uid : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isChinaSuppressed;
    NSString * _languageCode;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _reviewTime;
    GEOUser * _reviewer;
    double  _score;
    NSString * _snippet;
    NSString * _uid;
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
