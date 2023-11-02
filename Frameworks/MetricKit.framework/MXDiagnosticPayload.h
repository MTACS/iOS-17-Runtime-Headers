
@interface MXDiagnosticPayload : NSObject <NSSecureCoding> {
    NSArray * _appLaunchDiagnostics;
    NSArray * _cpuExceptionDiagnostics;
    NSArray * _crashDiagnostics;
    NSArray * _diskWriteExceptionDiagnostics;
    NSArray * _hangDiagnostics;
    NSDate * _timeStampBegin;
    NSDate * _timeStampEnd;
}

@property (readonly) NSArray *appLaunchDiagnostics;
@property (readonly) NSArray *cpuExceptionDiagnostics;
@property (readonly) NSArray *crashDiagnostics;
@property (readonly) NSArray *diskWriteExceptionDiagnostics;
@property (readonly) NSArray *hangDiagnostics;
@property (readonly) NSDate *timeStampBegin;
@property (readonly) NSDate *timeStampEnd;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)appLaunchDiagnostics;
- (id)cpuExceptionDiagnostics;
- (id)crashDiagnostics;
- (id)dictionaryRepresentation;
- (id)diskWriteExceptionDiagnostics;
- (void)encodeWithCoder:(id)arg1;
- (id)hangDiagnostics;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStampBegin:(id)arg1 withTimeStampEnd:(id)arg2 withDiagnostics:(id)arg3;
- (id)timeStampBegin;
- (id)timeStampEnd;
- (id)toDictionary;

@end
