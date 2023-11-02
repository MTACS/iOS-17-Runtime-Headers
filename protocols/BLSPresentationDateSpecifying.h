
@protocol BLSPresentationDateSpecifying <NSObject>

@required

- (NSString *)bls_loggingString;
- (NSString *)bls_shortLoggingString;
- (NSDate *)presentationDate;
- (NSArray *)specifiers;

@end
