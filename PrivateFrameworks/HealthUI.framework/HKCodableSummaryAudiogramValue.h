
@interface HKCodableSummaryAudiogramValue : PBCodable <NSCopying> {
    HKCodableQuantity * _averageLeftEarSensitivity;
    HKCodableQuantity * _averageRightEarSensitivity;
    long long  _diagnostic;
    struct APPLE_HKCodableSummaryAudiogramValue_1 { 
        unsigned int diagnostic : 1; 
        unsigned int timestampData : 1; 
    }  _has;
    HKCodableQuantity * _maximumSensitivity;
    HKCodableQuantity * _minimumSensitivity;
    NSMutableArray * _sensitivityPoints;
    double  _timestampData;
}

@property (nonatomic, retain) HKCodableQuantity *averageLeftEarSensitivity;
@property (nonatomic, retain) HKCodableQuantity *averageRightEarSensitivity;
@property (nonatomic) long long diagnostic;
@property (nonatomic, readonly) bool hasAverageLeftEarSensitivity;
@property (nonatomic, readonly) bool hasAverageRightEarSensitivity;
@property (nonatomic) bool hasDiagnostic;
@property (nonatomic, readonly) bool hasMaximumSensitivity;
@property (nonatomic, readonly) bool hasMinimumSensitivity;
@property (nonatomic) bool hasTimestampData;
@property (nonatomic, retain) HKCodableQuantity *maximumSensitivity;
@property (nonatomic, retain) HKCodableQuantity *minimumSensitivity;
@property (nonatomic, retain) NSMutableArray *sensitivityPoints;
@property (nonatomic) double timestampData;

+ (Class)sensitivityPointsType;

- (void).cxx_destruct;
- (void)addSensitivityPoints:(id)arg1;
- (id)averageLeftEarSensitivity;
- (id)averageRightEarSensitivity;
- (void)clearSensitivityPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)diagnostic;
- (id)dictionaryRepresentation;
- (bool)hasAverageLeftEarSensitivity;
- (bool)hasAverageRightEarSensitivity;
- (bool)hasDiagnostic;
- (bool)hasMaximumSensitivity;
- (bool)hasMinimumSensitivity;
- (bool)hasTimestampData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maximumSensitivity;
- (void)mergeFrom:(id)arg1;
- (id)minimumSensitivity;
- (bool)readFrom:(id)arg1;
- (id)sensitivityPoints;
- (id)sensitivityPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sensitivityPointsCount;
- (void)setAverageLeftEarSensitivity:(id)arg1;
- (void)setAverageRightEarSensitivity:(id)arg1;
- (void)setDiagnostic:(long long)arg1;
- (void)setHasDiagnostic:(bool)arg1;
- (void)setHasTimestampData:(bool)arg1;
- (void)setMaximumSensitivity:(id)arg1;
- (void)setMinimumSensitivity:(id)arg1;
- (void)setSensitivityPoints:(id)arg1;
- (void)setTimestampData:(double)arg1;
- (double)timestampData;
- (void)writeTo:(id)arg1;

@end
