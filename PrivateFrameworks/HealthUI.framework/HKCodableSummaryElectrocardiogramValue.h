
@interface HKCodableSummaryElectrocardiogramValue : PBCodable <NSCopying> {
    long long  _algorithmVersionRawValue;
    HKCodableQuantity * _averageHeartRate;
    long long  _classificationRawValue;
    struct APPLE_HKCodableSummaryElectrocardiogramValue_1 { 
        unsigned int algorithmVersionRawValue : 1; 
        unsigned int classificationRawValue : 1; 
        unsigned int timestampData : 1; 
    }  _has;
    double  _timestampData;
}

@property (nonatomic) long long algorithmVersionRawValue;
@property (nonatomic, retain) HKCodableQuantity *averageHeartRate;
@property (nonatomic) long long classificationRawValue;
@property (nonatomic) bool hasAlgorithmVersionRawValue;
@property (nonatomic, readonly) bool hasAverageHeartRate;
@property (nonatomic) bool hasClassificationRawValue;
@property (nonatomic) bool hasTimestampData;
@property (nonatomic) double timestampData;

- (void).cxx_destruct;
- (long long)algorithmVersionRawValue;
- (id)averageHeartRate;
- (long long)classificationRawValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithmVersionRawValue;
- (bool)hasAverageHeartRate;
- (bool)hasClassificationRawValue;
- (bool)hasTimestampData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlgorithmVersionRawValue:(long long)arg1;
- (void)setAverageHeartRate:(id)arg1;
- (void)setClassificationRawValue:(long long)arg1;
- (void)setHasAlgorithmVersionRawValue:(bool)arg1;
- (void)setHasClassificationRawValue:(bool)arg1;
- (void)setHasTimestampData:(bool)arg1;
- (void)setTimestampData:(double)arg1;
- (double)timestampData;
- (void)writeTo:(id)arg1;

@end
