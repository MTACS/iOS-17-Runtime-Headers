
@protocol AFSettingsServiceDelegate <NSObject>

@required

- (oneway void)syncVerificationPartialResult:(NSDictionary *)arg1;
- (oneway void)syncVerificationServerReport:(NSDictionary *)arg1;

@end
