
@protocol HKSourceAuthorizationControllerDelegate <NSObject>

@required

- (void)authorizationController:(HKSourceAuthorizationController *)arg1 parentTypeIsDisabled:(HKObjectType *)arg2 forType:(HKObjectType *)arg3 inSection:(long long)arg4;
- (void)authorizationController:(HKSourceAuthorizationController *)arg1 subTypesEnabled:(NSSet *)arg2 forType:(HKObjectType *)arg3 inSection:(long long)arg4;

@end
