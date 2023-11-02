
@interface MXHangTracerData : MXSourceData {
    MXAppLaunchDiagnostic * _appLaunchDiagnostic;
    MXHangDiagnostic * _hangDiagnostic;
}

@property (retain) MXAppLaunchDiagnostic *appLaunchDiagnostic;
@property (retain) MXHangDiagnostic *hangDiagnostic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appLaunchDiagnostic;
- (void)encodeWithCoder:(id)arg1;
- (id)hangDiagnostic;
- (id)initPayloadDataWithDiagnostics:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppLaunchDiagnostic:(id)arg1;
- (void)setHangDiagnostic:(id)arg1;

@end
