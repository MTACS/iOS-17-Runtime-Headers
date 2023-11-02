
@protocol WFLockdownModeProviderContext <WFProviderContext>

@required

- (void)join;
- (unsigned long long)securityType;

@end
