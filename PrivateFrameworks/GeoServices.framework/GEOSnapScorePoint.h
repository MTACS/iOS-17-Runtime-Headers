
@interface GEOSnapScorePoint : PBCodable <NSCopying> {
    NSMutableArray * _candidates;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_candidates : 1; 
        unsigned int read_point : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLatLng * _point;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *candidates;
@property (nonatomic, readonly) bool hasPoint;
@property (nonatomic, retain) GEOLatLng *point;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)candidateType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1;
- (id)candidateAtIndex:(unsigned long long)arg1;
- (id)candidates;
- (unsigned long long)candidatesCount;
- (void)clearCandidates;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPoint;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)point;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setPoint:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
