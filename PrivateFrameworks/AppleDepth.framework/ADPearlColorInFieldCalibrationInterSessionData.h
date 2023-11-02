
@interface ADPearlColorInFieldCalibrationInterSessionData : ADInFieldCalibrationInterSessionData {
    struct vector<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry, std::allocator<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry>> { 
        struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry {} *__begin_; 
        struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry {} *__end_; 
        struct __compressed_pair<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry *, std::allocator<ADPearlColorInFieldCalibrationDiagnosticPipelineEntry>> { 
            struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry {} *__value_; 
        } __end_cap_; 
    }  _diagnosticPipelineLog;
    unsigned long long  _diagnosticPipelineLogIndex;
    ADPearlColorInFieldCalibrationTelemetryData * _inFieldCalibrationTelemetryData;
    void _pearlToColorRotationAngles;
}

@property (nonatomic, retain) ADPearlColorInFieldCalibrationTelemetryData *inFieldCalibrationTelemetryData;
@property (nonatomic, readonly) void pearlToColorRotationAngles;

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
- (id)initWithFactoryPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithFactoryPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 andDeviceName:(id)arg3;
- (id)initWithFactoryPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 currentPearlToColorTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 andFlowType:(int)arg3;
- (bool)insertEntryToDiagnosticPipelineLog:(struct ADPearlColorInFieldCalibrationDiagnosticPipelineEntry { unsigned int x1; BOOL x2; BOOL x3; unsigned char x4; unsigned char x5; float x6; float x7; float x8; float x9; float x10[3]; float x11[3]; unsigned char x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; })arg1;
- (void)pearlToColorRotationAngles;
- (id)persistenceData;
- (void)setInFieldCalibrationTelemetryData:(id)arg1;

@end
