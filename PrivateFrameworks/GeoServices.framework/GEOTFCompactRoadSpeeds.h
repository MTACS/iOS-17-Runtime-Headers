
@interface GEOTFCompactRoadSpeeds : PBCodable <NSCopying> {
    int  _color;
    float  _confidence;
    unsigned int  _decayTimeWindowInMinutes;
    float  _endOffset;
    struct { 
        unsigned int has_color : 1; 
        unsigned int has_confidence : 1; 
        unsigned int has_decayTimeWindowInMinutes : 1; 
        unsigned int has_endOffset : 1; 
        unsigned int has_speedKph : 1; 
        unsigned int has_startOffset : 1; 
        unsigned int has_hidden : 1; 
        unsigned int read_geoIds : 1; 
        unsigned int read_openlr : 1; 
        unsigned int read_predictedSpeeds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoIds;
    bool  _hidden;
    NSData * _openlr;
    NSMutableArray * _predictedSpeeds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _speedKph;
    float  _startOffset;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
