
@protocol _SFAutoFillContextProviding <NSObject>

@required

- (NSString *)alphanumericStrongPassword;
- (void)copyCurrentStrongPassword;
- (NSString *)currentStrongPassword;
- (NSString *)defaultStrongPassword;
- (void)makeStrongPasswordFieldViewableAndEditable:(bool)arg1;
- (void)replaceCurrentPasswordWithPassword:(NSString *)arg1;

@end
