
@interface MXDiskWriteExceptionDiagnostic : MXDiagnostic {
    MXCallStackTree * _callStackTree;
    NSMeasurement * _totalWritesCaused;
}

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *totalWritesCaused;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callStackTree;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 pid:(int)arg4 totalWritesCaused:(id)arg5 stackTrace:(id)arg6;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 totalWritesCaused:(id)arg3 stackTrace:(id)arg4;
- (id)toDictionary;
- (id)totalWritesCaused;

@end
