
@interface CLPPipelineDiagnosticReport : PBCodable <NSCopying> {
    struct { 
        unsigned int prbCoarseIndoorSaysIndoor : 1; 
        unsigned int prbGpsSaysIndoor : 1; 
        unsigned int prbInjectionGainRetryLimitOk : 1; 
        unsigned int prbInjectionOccupancyRetryLimitOk : 1; 
        unsigned int prbInlierEstimate : 1; 
        unsigned int prbLocalizerIoWrapperSaysWifiOk : 1; 
        unsigned int prbOnFloorsEstimate : 1; 
        unsigned int prbParticleFilterSaysYield : 1; 
        unsigned int prbPipelinedSaysYield : 1; 
        unsigned int prbWifiSaysIndoor : 1; 
        unsigned int pfYieldStatusBeforeCalculatePose : 1; 
        unsigned int yieldStatusBeforeCalculatePose : 1; 
        unsigned int yieldType : 1; 
    }  _has;
    int  _pfYieldStatusBeforeCalculatePose;
    double  _prbCoarseIndoorSaysIndoor;
    double  _prbGpsSaysIndoor;
    double  _prbInjectionGainRetryLimitOk;
    double  _prbInjectionOccupancyRetryLimitOk;
    double  _prbInlierEstimate;
    double  _prbLocalizerIoWrapperSaysWifiOk;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _prbOnFloorEstimates;
    double  _prbOnFloorsEstimate;
    double  _prbParticleFilterSaysYield;
    double  _prbPipelinedSaysYield;
    double  _prbWifiSaysIndoor;
    int  _yieldStatusBeforeCalculatePose;
    int  _yieldType;
}

@property (nonatomic) bool hasPfYieldStatusBeforeCalculatePose;
@property (nonatomic) bool hasPrbCoarseIndoorSaysIndoor;
@property (nonatomic) bool hasPrbGpsSaysIndoor;
@property (nonatomic) bool hasPrbInjectionGainRetryLimitOk;
@property (nonatomic) bool hasPrbInjectionOccupancyRetryLimitOk;
@property (nonatomic) bool hasPrbInlierEstimate;
@property (nonatomic) bool hasPrbLocalizerIoWrapperSaysWifiOk;
@property (nonatomic) bool hasPrbOnFloorsEstimate;
@property (nonatomic) bool hasPrbParticleFilterSaysYield;
@property (nonatomic) bool hasPrbPipelinedSaysYield;
@property (nonatomic) bool hasPrbWifiSaysIndoor;
@property (nonatomic) bool hasYieldStatusBeforeCalculatePose;
@property (nonatomic) bool hasYieldType;
@property (nonatomic) int pfYieldStatusBeforeCalculatePose;
@property (nonatomic) double prbCoarseIndoorSaysIndoor;
@property (nonatomic) double prbGpsSaysIndoor;
@property (nonatomic) double prbInjectionGainRetryLimitOk;
@property (nonatomic) double prbInjectionOccupancyRetryLimitOk;
@property (nonatomic) double prbInlierEstimate;
@property (nonatomic) double prbLocalizerIoWrapperSaysWifiOk;
@property (nonatomic, readonly) double*prbOnFloorEstimates;
@property (nonatomic, readonly) unsigned long long prbOnFloorEstimatesCount;
@property (nonatomic) double prbOnFloorsEstimate;
@property (nonatomic) double prbParticleFilterSaysYield;
@property (nonatomic) double prbPipelinedSaysYield;
@property (nonatomic) double prbWifiSaysIndoor;
@property (nonatomic) int yieldStatusBeforeCalculatePose;
@property (nonatomic) int yieldType;

- (int)StringAsPfYieldStatusBeforeCalculatePose:(id)arg1;
- (int)StringAsYieldStatusBeforeCalculatePose:(id)arg1;
- (int)StringAsYieldType:(id)arg1;
- (void)addPrbOnFloorEstimate:(double)arg1;
- (void)clearPrbOnFloorEstimates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPfYieldStatusBeforeCalculatePose;
- (bool)hasPrbCoarseIndoorSaysIndoor;
- (bool)hasPrbGpsSaysIndoor;
- (bool)hasPrbInjectionGainRetryLimitOk;
- (bool)hasPrbInjectionOccupancyRetryLimitOk;
- (bool)hasPrbInlierEstimate;
- (bool)hasPrbLocalizerIoWrapperSaysWifiOk;
- (bool)hasPrbOnFloorsEstimate;
- (bool)hasPrbParticleFilterSaysYield;
- (bool)hasPrbPipelinedSaysYield;
- (bool)hasPrbWifiSaysIndoor;
- (bool)hasYieldStatusBeforeCalculatePose;
- (bool)hasYieldType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)pfYieldStatusBeforeCalculatePose;
- (id)pfYieldStatusBeforeCalculatePoseAsString:(int)arg1;
- (double)prbCoarseIndoorSaysIndoor;
- (double)prbGpsSaysIndoor;
- (double)prbInjectionGainRetryLimitOk;
- (double)prbInjectionOccupancyRetryLimitOk;
- (double)prbInlierEstimate;
- (double)prbLocalizerIoWrapperSaysWifiOk;
- (double)prbOnFloorEstimateAtIndex:(unsigned long long)arg1;
- (double*)prbOnFloorEstimates;
- (unsigned long long)prbOnFloorEstimatesCount;
- (double)prbOnFloorsEstimate;
- (double)prbParticleFilterSaysYield;
- (double)prbPipelinedSaysYield;
- (double)prbWifiSaysIndoor;
- (bool)readFrom:(id)arg1;
- (void)setHasPfYieldStatusBeforeCalculatePose:(bool)arg1;
- (void)setHasPrbCoarseIndoorSaysIndoor:(bool)arg1;
- (void)setHasPrbGpsSaysIndoor:(bool)arg1;
- (void)setHasPrbInjectionGainRetryLimitOk:(bool)arg1;
- (void)setHasPrbInjectionOccupancyRetryLimitOk:(bool)arg1;
- (void)setHasPrbInlierEstimate:(bool)arg1;
- (void)setHasPrbLocalizerIoWrapperSaysWifiOk:(bool)arg1;
- (void)setHasPrbOnFloorsEstimate:(bool)arg1;
- (void)setHasPrbParticleFilterSaysYield:(bool)arg1;
- (void)setHasPrbPipelinedSaysYield:(bool)arg1;
- (void)setHasPrbWifiSaysIndoor:(bool)arg1;
- (void)setHasYieldStatusBeforeCalculatePose:(bool)arg1;
- (void)setHasYieldType:(bool)arg1;
- (void)setPfYieldStatusBeforeCalculatePose:(int)arg1;
- (void)setPrbCoarseIndoorSaysIndoor:(double)arg1;
- (void)setPrbGpsSaysIndoor:(double)arg1;
- (void)setPrbInjectionGainRetryLimitOk:(double)arg1;
- (void)setPrbInjectionOccupancyRetryLimitOk:(double)arg1;
- (void)setPrbInlierEstimate:(double)arg1;
- (void)setPrbLocalizerIoWrapperSaysWifiOk:(double)arg1;
- (void)setPrbOnFloorEstimates:(double*)arg1 count:(unsigned long long)arg2;
- (void)setPrbOnFloorsEstimate:(double)arg1;
- (void)setPrbParticleFilterSaysYield:(double)arg1;
- (void)setPrbPipelinedSaysYield:(double)arg1;
- (void)setPrbWifiSaysIndoor:(double)arg1;
- (void)setYieldStatusBeforeCalculatePose:(int)arg1;
- (void)setYieldType:(int)arg1;
- (void)writeTo:(id)arg1;
- (int)yieldStatusBeforeCalculatePose;
- (id)yieldStatusBeforeCalculatePoseAsString:(int)arg1;
- (int)yieldType;
- (id)yieldTypeAsString:(int)arg1;

@end
