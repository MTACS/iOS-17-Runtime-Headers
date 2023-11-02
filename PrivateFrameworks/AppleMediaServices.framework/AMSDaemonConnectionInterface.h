
@interface AMSDaemonConnectionInterface : NSObject

+ (id)_accountCachedServerDataInterface;
+ (id)_accountSignOutInterface;
+ (void)_configureURLPresentationDelegateClasses:(id)arg1;
+ (id)_cookieServiceInterface;
+ (id)_deviceMessengerClientInterface;
+ (id)_deviceMessengerServiceInterface;
+ (id)_dismissQRDialogServiceInterface;
+ (id)_fraudReportServiceInterface;
+ (id)_keychainServiceInterface;
+ (id)_purchaseServiceInterface;
+ (id)_securityClientInterface;
+ (id)_securityServiceInterface;
+ (void)_setUpSecurityInterfaceApplePayClassic:(id)arg1;
+ (void)_setUpSecurityInterfaceBiometricSelectors:(id)arg1;
+ (void)_setUpSecurityInterfaceDeviceIdentitySelectors:(id)arg1;
+ (void)_setUpSecurityInterfaceHandleResponseSelector:(id)arg1;
+ (void)_setUpSecurityInterfaceSignedHeadersSelector:(id)arg1;
+ (void)_setUpSecurityInterfaceSilentEnrollmentSelector:(id)arg1;
+ (id)interface;

@end
