
@interface KTSelfValidationURIDiagnostics : NSObject <NSSecureCoding> {
    NSError * _error;
    NSDictionary * _ktVerificationInfoDiagnosticsJson;
    NSDate * _requestTime;
    NSString * _result;
    NSDictionary * _transparentDataDiagnosticsJson;
}

@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *error;
@property (retain) NSDictionary *ktVerificationInfoDiagnosticsJson;
@property (retain) NSDate *requestTime;
@property (retain) NSString *result;
@property (retain) NSDictionary *transparentDataDiagnosticsJson;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)ktVerificationInfoDiagnosticsJson;
- (id)requestTime;
- (id)result;
- (void)setError:(id)arg1;
- (void)setKtVerificationInfoDiagnosticsJson:(id)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTransparentDataDiagnosticsJson:(id)arg1;
- (id)transparentDataDiagnosticsJson;

@end
