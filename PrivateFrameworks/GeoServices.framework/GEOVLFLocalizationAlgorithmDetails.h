
@interface GEOVLFLocalizationAlgorithmDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int has_numberOfInliers : 1; 
        unsigned int has_numberOfKeypoints : 1; 
        unsigned int has_numberOfMatches : 1; 
        unsigned int has_tKptsMs : 1; 
        unsigned int has_tMatchMs : 1; 
        unsigned int has_tPoseMs : 1; 
        unsigned int read_fusedConfidences : 1; 
        unsigned int read_solverConfidences : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fusedConfidences;
    unsigned int  _numberOfInliers;
    unsigned int  _numberOfKeypoints;
    unsigned int  _numberOfMatches;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _solverConfidences;
    unsigned int  _tKptsMs;
    unsigned int  _tMatchMs;
    unsigned int  _tPoseMs;
}

@property (nonatomic, readonly) double*fusedConfidences;
@property (nonatomic, readonly) unsigned long long fusedConfidencesCount;
@property (nonatomic) bool hasNumberOfInliers;
@property (nonatomic) bool hasNumberOfKeypoints;
@property (nonatomic) bool hasNumberOfMatches;
@property (nonatomic) bool hasTKptsMs;
@property (nonatomic) bool hasTMatchMs;
@property (nonatomic) bool hasTPoseMs;
@property (nonatomic) unsigned int numberOfInliers;
@property (nonatomic) unsigned int numberOfKeypoints;
@property (nonatomic) unsigned int numberOfMatches;
@property (nonatomic, readonly) double*solverConfidences;
@property (nonatomic, readonly) unsigned long long solverConfidencesCount;
@property (nonatomic) unsigned int tKptsMs;
@property (nonatomic) unsigned int tMatchMs;
@property (nonatomic) unsigned int tPoseMs;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addFusedConfidence:(double)arg1;
- (void)addSolverConfidence:(double)arg1;
- (void)clearFusedConfidences;
- (void)clearSolverConfidences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)fusedConfidenceAtIndex:(unsigned long long)arg1;
- (double*)fusedConfidences;
- (unsigned long long)fusedConfidencesCount;
- (bool)hasNumberOfInliers;
- (bool)hasNumberOfKeypoints;
- (bool)hasNumberOfMatches;
- (bool)hasTKptsMs;
- (bool)hasTMatchMs;
- (bool)hasTPoseMs;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfInliers;
- (unsigned int)numberOfKeypoints;
- (unsigned int)numberOfMatches;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFusedConfidences:(double*)arg1 count:(unsigned long long)arg2;
- (void)setHasNumberOfInliers:(bool)arg1;
- (void)setHasNumberOfKeypoints:(bool)arg1;
- (void)setHasNumberOfMatches:(bool)arg1;
- (void)setHasTKptsMs:(bool)arg1;
- (void)setHasTMatchMs:(bool)arg1;
- (void)setHasTPoseMs:(bool)arg1;
- (void)setNumberOfInliers:(unsigned int)arg1;
- (void)setNumberOfKeypoints:(unsigned int)arg1;
- (void)setNumberOfMatches:(unsigned int)arg1;
- (void)setSolverConfidences:(double*)arg1 count:(unsigned long long)arg2;
- (void)setTKptsMs:(unsigned int)arg1;
- (void)setTMatchMs:(unsigned int)arg1;
- (void)setTPoseMs:(unsigned int)arg1;
- (double)solverConfidenceAtIndex:(unsigned long long)arg1;
- (double*)solverConfidences;
- (unsigned long long)solverConfidencesCount;
- (unsigned int)tKptsMs;
- (unsigned int)tMatchMs;
- (unsigned int)tPoseMs;
- (void)writeTo:(id)arg1;

@end
