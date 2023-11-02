
@protocol TSEntitlementJSHandlerDelegate <NSObject>

@required

- (void)didPurchasePlanSuccessfullyWithEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSDMP:(NSString *)arg5 state:(NSString *)arg6;

@optional

- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)didPurchasePlanSuccessfullyWithCarrier:(NSString *)arg1 mnc:(NSString *)arg2 gid1:(NSString *)arg3 gid2:(NSString *)arg4 state:(NSString *)arg5;
- (void)didTransferPlanSuccessfullyWithEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 srcIccid:(NSString *)arg5 alternateSDMP:(NSString *)arg6 state:(NSString *)arg7;

@end
