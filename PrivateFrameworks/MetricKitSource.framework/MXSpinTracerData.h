
@interface MXSpinTracerData : MXSourceData {
    MXCPUExceptionDiagnostic * _cpuExceptionDiagnostic;
    MXDiskWriteExceptionDiagnostic * _diskWriteExceptionDiagnostic;
}

@property (retain) MXCPUExceptionDiagnostic *cpuExceptionDiagnostic;
@property (retain) MXDiskWriteExceptionDiagnostic *diskWriteExceptionDiagnostic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cpuExceptionDiagnostic;
- (id)diskWriteExceptionDiagnostic;
- (void)encodeWithCoder:(id)arg1;
- (id)initPayloadDataWithDiagnostics:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCpuExceptionDiagnostic:(id)arg1;
- (void)setDiskWriteExceptionDiagnostic:(id)arg1;

@end
