
@interface ENTemporaryExposureKey : NSObject <CUXPCCodable> {
    long long  _daysSinceOnsetOfSymptoms;
    unsigned int  _diagnosisReportType;
    NSData * _keyData;
    unsigned int  _originalVariantOfConcernType;
    bool  _revised;
    unsigned int  _rollingPeriod;
    unsigned int  _rollingStartNumber;
    unsigned char  _transmissionRiskLevel;
    bool  _vaccinated;
    unsigned int  _variantOfConcernType;
}

@property (nonatomic) long long daysSinceOnsetOfSymptoms;
@property (nonatomic) unsigned int diagnosisReportType;
@property (nonatomic, copy) NSData *keyData;
@property (nonatomic) unsigned int originalVariantOfConcernType;
@property (nonatomic) bool revised;
@property (nonatomic) unsigned int rollingPeriod;
@property (nonatomic) unsigned int rollingStartNumber;
@property (nonatomic) unsigned char transmissionRiskLevel;
@property (nonatomic) bool vaccinated;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic) unsigned int variantOfConcernType;

- (void).cxx_destruct;
- (long long)daysSinceOnsetOfSymptoms;
- (void)deriveRollingProximityIdentifiersWithBuffer:(struct { unsigned char x1[16]; }*)arg1 count:(unsigned long long)arg2;
- (id)description;
- (unsigned int)diagnosisReportType;
- (void)encodeWithXPCObject:(id)arg1;
- (void)getAEMBytes:(void*)arg1 input:(const void*)arg2 length:(unsigned long long)arg3 RPI:(const struct { unsigned char x1[16]; }*)arg4;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)keyData;
- (unsigned int)originalVariantOfConcernType;
- (bool)revised;
- (unsigned int)rollingPeriod;
- (unsigned int)rollingStartNumber;
- (void)setDaysSinceOnsetOfSymptoms:(long long)arg1;
- (void)setDiagnosisReportType:(unsigned int)arg1;
- (void)setKeyData:(id)arg1;
- (void)setOriginalVariantOfConcernType:(unsigned int)arg1;
- (void)setRevised:(bool)arg1;
- (void)setRollingPeriod:(unsigned int)arg1;
- (void)setRollingStartNumber:(unsigned int)arg1;
- (void)setTransmissionRiskLevel:(unsigned char)arg1;
- (void)setVaccinated:(bool)arg1;
- (void)setVariantOfConcernType:(unsigned int)arg1;
- (unsigned char)transmissionRiskLevel;
- (bool)vaccinated;
- (unsigned int)variantOfConcernType;

@end
