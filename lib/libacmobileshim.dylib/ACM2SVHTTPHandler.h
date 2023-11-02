
@interface ACM2SVHTTPHandler : ACMHTTPAuthenticationHandler

- (id)convertErrorToACMError:(id)arg1;
- (bool)shouldValidateTGTs;

@end
