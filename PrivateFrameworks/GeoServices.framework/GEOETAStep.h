
@interface GEOETAStep : PBCodable <NSCopying> {
    unsigned int  _distanceCm;
    GEOStopStepEVInfo * _evInfo;
    GEOEVStateInfo * _evStateInfo;
    unsigned int  _expectedTime;
    struct { 
        unsigned int has_distanceCm : 1; 
        unsigned int has_expectedTime : 1; 
        unsigned int has_stepID : 1; 
        unsigned int has_zilchPathIndex : 1; 
        unsigned int has_zilchPointIndex : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_evInfo : 1; 
        unsigned int read_evStateInfo : 1; 
        unsigned int read_timeCheckpoints : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _stepID;
    GEOTimeCheckpoints * _timeCheckpoints;
    PBUnknownFields * _unknownFields;
    unsigned int  _zilchPathIndex;
    int  _zilchPointIndex;
}

@property (nonatomic) unsigned int distanceCm;
@property (nonatomic, retain) GEOStopStepEVInfo *evInfo;
@property (nonatomic, retain) GEOEVStateInfo *evStateInfo;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) bool hasDistanceCm;
@property (nonatomic, readonly) bool hasEvInfo;
@property (nonatomic, readonly) bool hasEvStateInfo;
@property (nonatomic) bool hasExpectedTime;
@property (nonatomic) bool hasStepID;
@property (nonatomic, readonly) bool hasTimeCheckpoints;
@property (nonatomic) bool hasZilchPathIndex;
@property (nonatomic) bool hasZilchPointIndex;
@property (nonatomic) unsigned int stepID;
@property (nonatomic, retain) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int zilchPathIndex;
@property (nonatomic) int zilchPointIndex;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceCm;
- (id)evInfo;
- (id)evStateInfo;
- (unsigned int)expectedTime;
- (bool)hasDistanceCm;
- (bool)hasEvInfo;
- (bool)hasEvStateInfo;
- (bool)hasExpectedTime;
- (bool)hasStepID;
- (bool)hasTimeCheckpoints;
- (bool)hasZilchPathIndex;
- (bool)hasZilchPointIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceCm:(unsigned int)arg1;
- (void)setEvInfo:(id)arg1;
- (void)setEvStateInfo:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setHasDistanceCm:(bool)arg1;
- (void)setHasExpectedTime:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasZilchPathIndex:(bool)arg1;
- (void)setHasZilchPointIndex:(bool)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeCheckpoints:(id)arg1;
- (void)setZilchPathIndex:(unsigned int)arg1;
- (void)setZilchPointIndex:(int)arg1;
- (unsigned int)stepID;
- (id)timeCheckpoints;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (unsigned int)zilchPathIndex;
- (int)zilchPointIndex;

@end
