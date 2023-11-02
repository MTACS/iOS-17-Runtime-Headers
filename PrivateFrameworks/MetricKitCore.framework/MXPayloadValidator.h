
@interface MXPayloadValidator : NSObject {
    NSObject<OS_os_log> * _logHandle;
}

@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (void)_sanitizeDeviceMetadataForDiagnostic:(id)arg1;
- (bool)_validateHangTracerData:(id)arg1;
- (bool)_validatePayload:(id)arg1;
- (bool)_validatePowerlogData:(id)arg1;
- (bool)_validateReportCrashData:(id)arg1;
- (bool)_validateSpinTracerData:(id)arg1;
- (id)initWithLogHandle:(id)arg1;
- (id)logHandle;
- (void)setLogHandle:(id)arg1;
- (bool)validatePayload:(id)arg1;

@end
