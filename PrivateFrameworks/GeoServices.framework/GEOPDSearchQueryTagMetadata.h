
@interface GEOPDSearchQueryTagMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int has_normalizedScore : 1; 
        unsigned int has_score : 1; 
        unsigned int has_sigmoidScore : 1; 
        unsigned int has_rank : 1; 
        unsigned int read_modelVersions : 1; 
        unsigned int read_spanScores : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _modelVersions;
    double  _normalizedScore;
    unsigned int  _rank;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _score;
    double  _sigmoidScore;
    NSMutableArray * _spanScores;
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
