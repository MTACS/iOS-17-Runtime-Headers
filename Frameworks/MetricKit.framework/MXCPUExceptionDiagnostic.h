
@interface MXCPUExceptionDiagnostic : MXDiagnostic {
    MXCallStackTree * _callStackTree;
    NSMeasurement * _totalCPUTime;
    NSMeasurement * _totalSampledTime;
}

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *totalCPUTime;
@property (readonly) NSMeasurement *totalSampledTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callStackTree;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 totalCpuTime:(id)arg4 totalSampledTime:(id)arg5;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 pid:(int)arg4 callStack:(id)arg5 totalCpuTime:(id)arg6 totalSampledTime:(id)arg7;
- (id)toDictionary;
- (id)totalCPUTime;
- (id)totalSampledTime;

@end
