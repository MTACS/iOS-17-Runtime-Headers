
@protocol BLSEnvironmentDateSpecifying <NSObject>

@required

- (NSString *)bls_loggingString;
- (NSString *)bls_shortLoggingString;
- (BLSAlwaysOnDateSpecifier *)dateSpecifier;
- (NSString *)environmentIdentifier;

@end
