
@interface MXAppLaunchDiagnostic : MXDiagnostic {
    MXCallStackTree * _callStackTree;
    NSMeasurement * _launchDuration;
}

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *launchDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callStackTree;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 launchDuration:(id)arg4;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 pid:(int)arg4 callStack:(id)arg5 launchDuration:(id)arg6;
- (id)launchDuration;
- (id)toDictionary;

@end
