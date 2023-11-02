
@interface MXHangDiagnostic : MXDiagnostic {
    MXCallStackTree * _callStackTree;
    NSMeasurement * _hangDuration;
    long long  _hangType;
}

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *hangDuration;
@property (nonatomic, readonly) long long hangType;
@property (nonatomic, readonly) NSString *hangTypeString;

+ (long long)_hangTypeForHangTypeString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callStackTree;
- (void)encodeWithCoder:(id)arg1;
- (id)hangDuration;
- (long long)hangType;
- (id)hangTypeString;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 callStack:(id)arg3 hangDuration:(id)arg4;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 pid:(int)arg4 callStack:(id)arg5 hangDuration:(id)arg6;
- (id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 signpostData:(id)arg3 pid:(int)arg4 callStack:(id)arg5 hangDuration:(id)arg6 hangType:(long long)arg7;
- (id)toDictionary;

@end
