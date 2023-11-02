
@interface HKCodableStateOfMindValenceDistributionData : PBCodable <NSCopying> {
    struct APPLE_HKCodableStateOfMindValenceDistributionData_1 { 
        unsigned int maximumValence : 1; 
        unsigned int minimumValence : 1; 
        unsigned int sampleCount : 1; 
        unsigned int reflectiveInterval : 1; 
    }  _has;
    double  _maximumValence;
    double  _minimumValence;
    int  _reflectiveInterval;
    long long  _sampleCount;
}

@property (nonatomic) bool hasMaximumValence;
@property (nonatomic) bool hasMinimumValence;
@property (nonatomic) bool hasReflectiveInterval;
@property (nonatomic) bool hasSampleCount;
@property (nonatomic) double maximumValence;
@property (nonatomic) double minimumValence;
@property (nonatomic) int reflectiveInterval;
@property (nonatomic) long long sampleCount;

- (int)StringAsReflectiveInterval:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaximumValence;
- (bool)hasMinimumValence;
- (bool)hasReflectiveInterval;
- (bool)hasSampleCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)maximumValence;
- (void)mergeFrom:(id)arg1;
- (double)minimumValence;
- (bool)readFrom:(id)arg1;
- (int)reflectiveInterval;
- (id)reflectiveIntervalAsString:(int)arg1;
- (long long)sampleCount;
- (void)setHasMaximumValence:(bool)arg1;
- (void)setHasMinimumValence:(bool)arg1;
- (void)setHasReflectiveInterval:(bool)arg1;
- (void)setHasSampleCount:(bool)arg1;
- (void)setMaximumValence:(double)arg1;
- (void)setMinimumValence:(double)arg1;
- (void)setReflectiveInterval:(int)arg1;
- (void)setSampleCount:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
