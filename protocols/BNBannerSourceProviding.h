
@protocol BNBannerSourceProviding <BSInvalidatable, BNSuspendable>

@required

- (<BNBannerSourceDelegate> *)delegate;
- (long long)destination;
- (bool)isValid;
- (BNBannerSourceLayoutDescription *)layoutDescriptionWithError:(out id*)arg1;
- (bool)postPresentable:(id <BNPresentable>)arg1 options:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3 error:(out id*)arg4;
- (NSString *)requesterIdentifier;
- (NSArray *)revokeAllPresentablesWithReason:(NSString *)arg1 userInfo:(NSDictionary *)arg2 error:(out id*)arg3;
- (NSArray *)revokePresentableWithRequestIdentifier:(NSString *)arg1 reason:(NSString *)arg2 animated:(bool)arg3 userInfo:(NSDictionary *)arg4 error:(out id*)arg5;
- (void)setDelegate:(id <BNBannerSourceDelegate>)arg1;

@optional

- (bool)revokePresentableWithRequestIdentifier:(NSString *)arg1 animated:(bool)arg2 reason:(NSString *)arg3 userInfo:(NSDictionary *)arg4 error:(out id*)arg5;

@end
