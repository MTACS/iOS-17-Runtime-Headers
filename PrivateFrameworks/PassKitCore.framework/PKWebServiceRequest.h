
@interface PKWebServiceRequest : NSObject <NSSecureCoding> {
    NSString * _boundInterfaceIdentifier;
    unsigned long long  _cachePolicyOverride;
    NSMutableArray * _diagnosticReasonsList;
    NSString * _sourceApplicationIdentifier;
    double  _timeoutOverride;
}

@property (nonatomic, copy) NSString *boundInterfaceIdentifier;
@property (nonatomic) unsigned long long cachePolicyOverride;
@property (nonatomic, readonly) NSArray *diagnosticReasons;
@property (nonatomic, copy) NSString *sourceApplicationIdentifier;
@property (nonatomic) double timeoutOverride;

+ (id)_HTTPBodyWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_murlRequestWithURL:(id)arg1 appleAccountInformation:(id)arg2;
- (void)addDiagnosticReason:(id)arg1;
- (id)boundInterfaceIdentifier;
- (unsigned long long)cachePolicyOverride;
- (id)diagnosticReasons;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setCachePolicyOverride:(unsigned long long)arg1;
- (void)setDiagnosticReasons:(id)arg1;
- (void)setSourceApplicationIdentifier:(id)arg1;
- (void)setTimeoutOverride:(double)arg1;
- (id)sourceApplicationIdentifier;
- (double)timeoutOverride;

@end
