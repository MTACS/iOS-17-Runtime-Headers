
@interface TPSCallingLineIdRestrictionRequestController : TPSRequestController <CoreTelephonyClientSuppServicesDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)executeFetchForRequest:(id)arg1;
- (void)executeRequest:(id)arg1;
- (void)executeSetForRequest:(id)arg1;
- (void)respondWithSubscriptionContext:(id)arg1 editable:(bool)arg2 state:(long long)arg3 error:(id)arg4;
- (void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;

@end
