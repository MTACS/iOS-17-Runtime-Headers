
@interface MXCrashDiagnostic : MXDiagnostic {
    MXCallStackTree * _callStackTree;
    NSNumber * _exceptionCode;
    MXCrashDiagnosticObjectiveCExceptionReason * _exceptionReason;
    NSNumber * _exceptionType;
    NSNumber * _signal;
    NSString * _terminationReason;
    NSString * _virtualMemoryRegionInfo;
}

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSNumber *exceptionCode;
@property (readonly) MXCrashDiagnosticObjectiveCExceptionReason *exceptionReason;
@property (readonly) NSNumber *exceptionType;
@property (readonly) NSNumber *signal;
@property (readonly) NSString *terminationReason;
@property (readonly) NSString *virtualMemoryRegionInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callStackTree;
- (void)encodeWithCoder:(id)arg1;
- (id)exceptionCode;
- (id)exceptionReason;
- (id)exceptionType;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 pid:(int)arg4 terminationReason:(id)arg5 applicationSpecificInfo:(id)arg6 virtualMemoryRegionInfo:(id)arg7 exceptionType:(id)arg8 exceptionCode:(id)arg9 exceptionReason:(id)arg10 signal:(id)arg11 stackTrace:(id)arg12;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 pid:(int)arg4 terminationReason:(id)arg5 applicationSpecificInfo:(id)arg6 virtualMemoryRegionInfo:(id)arg7 exceptionType:(id)arg8 exceptionCode:(id)arg9 signal:(id)arg10 stackTrace:(id)arg11;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 terminationReason:(id)arg3 applicationSpecificInfo:(id)arg4 virtualMemoryRegionInfo:(id)arg5 exceptionType:(id)arg6 exceptionCode:(id)arg7 signal:(id)arg8 stackTrace:(id)arg9;
- (id)signal;
- (id)terminationReason;
- (id)toDictionary;
- (id)virtualMemoryRegionInfo;

@end
