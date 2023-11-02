
@interface ENExposureWindow : NSObject <CUXPCCodable> {
    unsigned char  _calibrationConfidence;
    NSDate * _date;
    unsigned int  _diagnosisReportType;
    unsigned int  _infectiousness;
    NSArray * _scanInstances;
    unsigned int  _variantOfConcernType;
}

@property (nonatomic) unsigned char calibrationConfidence;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) unsigned int diagnosisReportType;
@property (nonatomic) unsigned int infectiousness;
@property (nonatomic, copy) NSArray *scanInstances;
@property (nonatomic) unsigned int variantOfConcernType;

- (void).cxx_destruct;
- (unsigned char)calibrationConfidence;
- (id)date;
- (id)description;
- (unsigned int)diagnosisReportType;
- (void)encodeWithXPCObject:(id)arg1;
- (unsigned int)infectiousness;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (id)scanInstances;
- (void)setCalibrationConfidence:(unsigned char)arg1;
- (void)setDate:(id)arg1;
- (void)setDiagnosisReportType:(unsigned int)arg1;
- (void)setInfectiousness:(unsigned int)arg1;
- (void)setScanInstances:(id)arg1;
- (void)setVariantOfConcernType:(unsigned int)arg1;
- (unsigned int)variantOfConcernType;

@end
