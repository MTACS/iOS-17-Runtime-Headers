
@protocol ECMailAccount <NSObject, NSCopying, ECAccountPropertyProviding>

@required

- (NSArray *)emailAddressStrings;
- (NSString *)hostname;
- (NSString *)identifier;
- (NSString *)password;
- (void)setHostname:(NSString *)arg1;
- (void)setPassword:(NSString *)arg1;
- (ACAccount *)systemAccount;

@end
