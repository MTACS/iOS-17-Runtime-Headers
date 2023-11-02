
@interface PKPaymentNotificationAppURLHelper : NSObject

+ (id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 serviceIdentifier:(id)arg3 appLaunchToken:(id)arg4 pathSuffix:(id)arg5 usingDeviceAccountNumber:(bool)arg6;
+ (id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (id)appURLForTransactionNotification:(id)arg1 excludeTransactionIdentifier:(bool)arg2 pass:(id)arg3 pathSuffix:(id)arg4 appLaunchToken:(id)arg5;
+ (id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3;
+ (bool)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1;

@end
