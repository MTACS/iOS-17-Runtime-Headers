
@interface MXReportCrashData : MXSourceData {
    MXCrashDiagnostic * _crashDiagnostic;
}

@property (retain) MXCrashDiagnostic *crashDiagnostic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)crashDiagnostic;
- (void)encodeWithCoder:(id)arg1;
- (id)initPayloadDataWithDiagnostics:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCrashDiagnostic:(id)arg1;

@end
