
@protocol STClientXPCServiceProvider

@required

- (<STPasscodeAuthenticationProviderService> *)providePasscodeAuthenticationProviderService;
- (<STPasscodeProviderService> *)providePasscodeProviderService;

@end
