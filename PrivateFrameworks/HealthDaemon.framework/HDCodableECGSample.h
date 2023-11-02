
@interface HDCodableECGSample : PBCodable <HDDecoding, NSCopying> {
    double  _averageHeartRateInBPM;
    struct { 
        unsigned int averageHeartRateInBPM : 1; 
        unsigned int privateClassification : 1; 
        unsigned int symptomsStatus : 1; 
    }  _has;
    long long  _privateClassification;
    HDCodableSample * _sample;
    long long  _symptomsStatus;
    NSData * _voltagePayload;
}

@property (nonatomic) double averageHeartRateInBPM;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAverageHeartRateInBPM;
@property (nonatomic) bool hasPrivateClassification;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasSymptomsStatus;
@property (nonatomic, readonly) bool hasVoltagePayload;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long privateClassification;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) long long symptomsStatus;
@property (nonatomic, retain) NSData *voltagePayload;

- (void).cxx_destruct;
- (bool)applyToObject:(id)arg1;
- (double)averageHeartRateInBPM;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAverageHeartRateInBPM;
- (bool)hasPrivateClassification;
- (bool)hasSample;
- (bool)hasSymptomsStatus;
- (bool)hasVoltagePayload;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)privateClassification;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setAverageHeartRateInBPM:(double)arg1;
- (void)setHasAverageHeartRateInBPM:(bool)arg1;
- (void)setHasPrivateClassification:(bool)arg1;
- (void)setHasSymptomsStatus:(bool)arg1;
- (void)setPrivateClassification:(long long)arg1;
- (void)setSample:(id)arg1;
- (void)setSymptomsStatus:(long long)arg1;
- (void)setVoltagePayload:(id)arg1;
- (long long)symptomsStatus;
- (id)voltagePayload;
- (void)writeTo:(id)arg1;

@end
