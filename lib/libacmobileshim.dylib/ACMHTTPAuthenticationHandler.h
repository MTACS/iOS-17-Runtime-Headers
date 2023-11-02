
@interface ACMHTTPAuthenticationHandler : ACMHTTPHandler {
    NSString * _policyVersion;
    NSString * _realm;
    NSDate * _startInvocationDate;
}

@property (nonatomic, readonly) NSString *policyVersion;
@property (nonatomic, readonly) NSString *realm;

- (id)initWithContext:(id)arg1;
- (id)policyVersion;
- (id)realm;
- (id)requestBody;
- (bool)shouldReturnResponse:(id)arg1 orReportError:(id*)arg2;
- (bool)shouldValidateTGTs;

@end
