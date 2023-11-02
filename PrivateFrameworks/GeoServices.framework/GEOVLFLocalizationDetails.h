
@interface GEOVLFLocalizationDetails : PBCodable <NSCopying> {
    GEOVLFLocalizationAlgorithmDetails * _algorithmDetails;
    double  _exposureTargetOffset;
    GEOVLFFailureDetails * _failureDetails;
    struct { 
        unsigned int has_positionContextClassification : 1; 
        unsigned int has_exposureTargetOffset : 1; 
        unsigned int has_relativeTimestampMs : 1; 
        unsigned int has_runTimeMs : 1; 
        unsigned int read_algorithmDetails : 1; 
        unsigned int read_failureDetails : 1; 
        unsigned int read_gravityVector : 1; 
        unsigned int read_location : 1; 
        unsigned int read_successDetails : 1; 
        unsigned int read_tileDetails : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOVLFGravityVector * _gravityVector;
    GEOVLFLocation * _location;
    struct GEOVLFPositionContextClassification { 
        double _indoorProbability; 
        double _outdoorProbability; 
        int _type; 
        struct { 
            unsigned int indoorProbability : 1; 
            unsigned int outdoorProbability : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _positionContextClassification;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _relativeTimestampMs;
    unsigned int  _runTimeMs;
    GEOVLFSuccessDetails * _successDetails;
    GEOVLFTileDetails * _tileDetails;
}

@property (nonatomic, retain) GEOVLFLocalizationAlgorithmDetails *algorithmDetails;
@property (nonatomic) double exposureTargetOffset;
@property (nonatomic, retain) GEOVLFFailureDetails *failureDetails;
@property (nonatomic, retain) GEOVLFGravityVector *gravityVector;
@property (nonatomic, readonly) bool hasAlgorithmDetails;
@property (nonatomic) bool hasExposureTargetOffset;
@property (nonatomic, readonly) bool hasFailureDetails;
@property (nonatomic, readonly) bool hasGravityVector;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasPositionContextClassification;
@property (nonatomic) bool hasRelativeTimestampMs;
@property (nonatomic) bool hasRunTimeMs;
@property (nonatomic, readonly) bool hasSuccessDetails;
@property (nonatomic, readonly) bool hasTileDetails;
@property (nonatomic, retain) GEOVLFLocation *location;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } positionContextClassification;
@property (nonatomic) unsigned int relativeTimestampMs;
@property (nonatomic) unsigned int runTimeMs;
@property (nonatomic, retain) GEOVLFSuccessDetails *successDetails;
@property (nonatomic, retain) GEOVLFTileDetails *tileDetails;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)algorithmDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)exposureTargetOffset;
- (id)failureDetails;
- (id)gravityVector;
- (bool)hasAlgorithmDetails;
- (bool)hasExposureTargetOffset;
- (bool)hasFailureDetails;
- (bool)hasGravityVector;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasPositionContextClassification;
- (bool)hasRelativeTimestampMs;
- (bool)hasRunTimeMs;
- (bool)hasSuccessDetails;
- (bool)hasTileDetails;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (struct GEOVLFPositionContextClassification { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })positionContextClassification;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)relativeTimestampMs;
- (unsigned int)runTimeMs;
- (void)setAlgorithmDetails:(id)arg1;
- (void)setExposureTargetOffset:(double)arg1;
- (void)setFailureDetails:(id)arg1;
- (void)setGravityVector:(id)arg1;
- (void)setHasExposureTargetOffset:(bool)arg1;
- (void)setHasPositionContextClassification:(bool)arg1;
- (void)setHasRelativeTimestampMs:(bool)arg1;
- (void)setHasRunTimeMs:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setPositionContextClassification:(struct GEOVLFPositionContextClassification { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)setRelativeTimestampMs:(unsigned int)arg1;
- (void)setRunTimeMs:(unsigned int)arg1;
- (void)setSuccessDetails:(id)arg1;
- (void)setTileDetails:(id)arg1;
- (id)successDetails;
- (id)tileDetails;
- (void)writeTo:(id)arg1;

@end
