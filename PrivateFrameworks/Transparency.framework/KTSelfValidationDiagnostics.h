
@interface KTSelfValidationDiagnostics : NSObject <NSSecureCoding> {
    NSString * _accountKey;
    NSDictionary * _ktSelfVerificationInfoDiagnosticsJson;
    NSString * _rawAccountKey;
    NSDictionary * _uriToDiagnostics;
}

@property (retain) NSString *accountKey;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSDictionary *ktSelfVerificationInfoDiagnosticsJson;
@property (retain) NSString *rawAccountKey;
@property (retain) NSDictionary *uriToDiagnostics;

+ (id)jsonClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountKey;
- (id)description;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)ktSelfVerificationInfoDiagnosticsJson;
- (id)rawAccountKey;
- (void)setAccountKey:(id)arg1;
- (void)setKtSelfVerificationInfoDiagnosticsJson:(id)arg1;
- (void)setRawAccountKey:(id)arg1;
- (void)setUriToDiagnostics:(id)arg1;
- (id)uriToDiagnostics;

@end
