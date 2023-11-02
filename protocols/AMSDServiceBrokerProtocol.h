
@protocol AMSDServiceBrokerProtocol <NSObject>

@required

- (AMSPromise *)accountCachedServerDataService;
- (AMSPromise *)accountSignOutServiceProxy;
- (void)addInterruptionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (AMSPromise *)callService:(void *)arg1 then:(void *)arg2; // needs 2 arg types, found 7: AMSPromise *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, AMSPromise *, id /* block */, id, void*
- (AMSPromise *)cookieServiceProxy;
- (<AMSCookieServiceInterface> *)cookieServiceProxySyncWithError:(id*)arg1;
- (AMSPromise *)deviceMessengerProxyWithDelegate:(id <AMSDeviceMessengerClientInterface>)arg1;
- (AMSPromise *)dismissQRDialogServiceProxy;
- (AMSPromise *)fraudReportServiceProxy;
- (AMSPromise *)keychainServiceProxy;
- (AMSPromise *)purchaseServiceProxy;
- (AMSPromise *)pushNotificationService;
- (AMSPromise *)securityServiceProxyWithDelegate:(id <AMSSecurityClientInterface>)arg1;

@end
