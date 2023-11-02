
@protocol HMDACAccount <NSObject>

@required

- (NSString *)aa_altDSID;
- (NSString *)aa_personID;
- (bool)isEnabledForDataclass:(NSString *)arg1;
- (NSString *)username;

@end
