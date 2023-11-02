
@interface GEOPDParsecRankingFeatures : PBCodable <NSCopying> {
    double  _distanceFromContainment;
    double  _distanceFromDeviceLocation;
    double  _expectedCtr;
    struct { 
        unsigned int has_distanceFromContainment : 1; 
        unsigned int has_distanceFromDeviceLocation : 1; 
        unsigned int has_expectedCtr : 1; 
        unsigned int has_isRecallMismatch : 1; 
        unsigned int has_isSpellCorrected : 1; 
    }  _flags;
    bool  _isRecallMismatch;
    bool  _isSpellCorrected;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double distanceFromContainment;
@property (nonatomic) double distanceFromDeviceLocation;
@property (nonatomic) double expectedCtr;
@property (nonatomic) bool hasDistanceFromContainment;
@property (nonatomic) bool hasDistanceFromDeviceLocation;
@property (nonatomic) bool hasExpectedCtr;
@property (nonatomic) bool hasIsRecallMismatch;
@property (nonatomic) bool hasIsSpellCorrected;
@property (nonatomic) bool isRecallMismatch;
@property (nonatomic) bool isSpellCorrected;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceFromContainment;
- (double)distanceFromDeviceLocation;
- (double)expectedCtr;
- (bool)hasDistanceFromContainment;
- (bool)hasDistanceFromDeviceLocation;
- (bool)hasExpectedCtr;
- (bool)hasIsRecallMismatch;
- (bool)hasIsSpellCorrected;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRecallMismatch;
- (bool)isSpellCorrected;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceFromContainment:(double)arg1;
- (void)setDistanceFromDeviceLocation:(double)arg1;
- (void)setExpectedCtr:(double)arg1;
- (void)setHasDistanceFromContainment:(bool)arg1;
- (void)setHasDistanceFromDeviceLocation:(bool)arg1;
- (void)setHasExpectedCtr:(bool)arg1;
- (void)setHasIsRecallMismatch:(bool)arg1;
- (void)setHasIsSpellCorrected:(bool)arg1;
- (void)setIsRecallMismatch:(bool)arg1;
- (void)setIsSpellCorrected:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
