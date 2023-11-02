
@protocol BNBannerSourceProvidingPrivate <BNBannerSourceProviding>

@required

- (UIWindow *)keyWindowForScreen:(UIScreen *)arg1;
- (NSArray *)revokePresentableWithIdentification:(id <BNPresentableUniquelyIdentifying><BSXPCSecureCoding>)arg1 reason:(NSString *)arg2 animated:(bool)arg3 userInfo:(NSDictionary *)arg4 error:(out id*)arg5;

@end
