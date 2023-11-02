
@protocol URTAlertServiceDelegate <NSObject>

@required

- (void)alertService:(URTAlertService *)arg1 wantsDismissalForAlert:(URTAlert *)arg2;
- (void)alertService:(URTAlertService *)arg1 wantsPresentationForAlert:(URTAlert *)arg2 preferredPresentationStyle:(long long)arg3;

@end
