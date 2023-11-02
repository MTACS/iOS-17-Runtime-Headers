
@interface ADJasperColorInFieldCalibrationInterSessionData : ADInFieldCalibrationInterSessionData {
    struct vector<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry, std::allocator<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry>> { 
        struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry {} *__begin_; 
        struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry {} *__end_; 
        struct __compressed_pair<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry *, std::allocator<ADJasperColorInFieldCalibrationDiagnosticPipelineEntry>> { 
            struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry {} *__value_; 
        } __end_cap_; 
    }  _diagnosticPipelineLog;
    unsigned long long  _diagnosticPipelineLogIndex;
    ADJasperColorInFieldCalibrationTelemetryData * _inFieldCalibrationTelemetryData;
    NSData * _intersessionFeaturesHistory;
    unsigned int  _intersessionFeaturesHistoryCount;
    void _jasperToColorRotationAngles;
    unsigned int  _successfulResultCount;
}

@property (nonatomic, retain) ADJasperColorInFieldCalibrationTelemetryData *inFieldCalibrationTelemetryData;
@property (nonatomic, retain) NSData *intersessionFeaturesHistory;
@property (nonatomic) unsigned int intersessionFeaturesHistoryCount;
@property (nonatomic, readonly) void jasperToColorRotationAngles;
@property (nonatomic) unsigned int successfulResultCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)convertDictToExtrinsicsAngles:(id)arg1;
- (id)convertExtrinsicsAnglesToDict;
- (id)inFieldCalibrationTelemetryData;
- (void)initDiagnosticPipelineLogWithFlowType:(int)arg1;
- (void)initIsf;
- (void)initIsfWithFlowType:(int)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 andDeviceName:(id)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 andFlowType:(int)arg2;
- (id)initWithFactoryJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithFactoryJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 andDeviceName:(id)arg3;
- (id)initWithFactoryJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentJasperToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 andFlowType:(int)arg3;
- (bool)insertEntryToDiagnosticPipelineLog:(struct ADJasperColorInFieldCalibrationDiagnosticPipelineEntry { unsigned int x1; BOOL x2; unsigned char x3; unsigned char x4; float x5; float x6; float x7; float x8; float x9[5][3]; float x10[5][3]; unsigned char x11[5]; BOOL x12; BOOL x13; })arg1;
- (id)intersessionFeaturesHistory;
- (unsigned int)intersessionFeaturesHistoryCount;
- (unsigned int)isfCapacity;
- (void)jasperToColorRotationAngles;
- (id)persistenceData;
- (void)setInFieldCalibrationTelemetryData:(id)arg1;
- (void)setIntersessionFeaturesHistory:(id)arg1;
- (void)setIntersessionFeaturesHistoryCount:(unsigned int)arg1;
- (void)setSuccessfulResultCount:(unsigned int)arg1;
- (unsigned int)successfulResultCount;

@end
