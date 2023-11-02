
@interface HKCodableElectrocardiogramSample : PBCodable <NSCopying> {
    long long  _algorithmVersionRawValue;
    HKCodableQuantity * _averageHeartRate;
    long long  _classificationRawValue;
    HKCodableDateInterval * _dateInterval;
    struct APPLE_HKCodableElectrocardiogramSample_1 { 
        unsigned int algorithmVersionRawValue : 1; 
        unsigned int classificationRawValue : 1; 
        unsigned int privateSymptoms : 1; 
        unsigned int symptomsStatusRawValue : 1; 
    }  _has;
    long long  _privateSymptoms;
    NSData * _readingData;
    long long  _symptomsStatusRawValue;
}

@property (nonatomic) long long algorithmVersionRawValue;
@property (nonatomic, retain) HKCodableQuantity *averageHeartRate;
@property (nonatomic) long long classificationRawValue;
@property (nonatomic, retain) HKCodableDateInterval *dateInterval;
@property (nonatomic) bool hasAlgorithmVersionRawValue;
@property (nonatomic, readonly) bool hasAverageHeartRate;
@property (nonatomic) bool hasClassificationRawValue;
@property (nonatomic, readonly) bool hasDateInterval;
@property (nonatomic) bool hasPrivateSymptoms;
@property (nonatomic, readonly) bool hasReadingData;
@property (nonatomic) bool hasSymptomsStatusRawValue;
@property (nonatomic) long long privateSymptoms;
@property (nonatomic, retain) NSData *readingData;
@property (nonatomic) long long symptomsStatusRawValue;

- (void).cxx_destruct;
- (long long)algorithmVersionRawValue;
- (id)averageHeartRate;
- (long long)classificationRawValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithmVersionRawValue;
- (bool)hasAverageHeartRate;
- (bool)hasClassificationRawValue;
- (bool)hasDateInterval;
- (bool)hasPrivateSymptoms;
- (bool)hasReadingData;
- (bool)hasSymptomsStatusRawValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)privateSymptoms;
- (bool)readFrom:(id)arg1;
- (id)readingData;
- (void)setAlgorithmVersionRawValue:(long long)arg1;
- (void)setAverageHeartRate:(id)arg1;
- (void)setClassificationRawValue:(long long)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHasAlgorithmVersionRawValue:(bool)arg1;
- (void)setHasClassificationRawValue:(bool)arg1;
- (void)setHasPrivateSymptoms:(bool)arg1;
- (void)setHasSymptomsStatusRawValue:(bool)arg1;
- (void)setPrivateSymptoms:(long long)arg1;
- (void)setReadingData:(id)arg1;
- (void)setSymptomsStatusRawValue:(long long)arg1;
- (long long)symptomsStatusRawValue;
- (void)writeTo:(id)arg1;

@end
