
@protocol ACFErrorReportingProtocol

@required

- (void)clearError;
- (NSError *)error;
- (long long)errorCode;
- (NSString *)errorMessage;
- (void)setError:(NSError *)arg1;

@end
