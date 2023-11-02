
@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent

+ (id)_propertyValueClassesForKnownProperties;
+ (id)_timestamp;
+ (id)dictionaryForBiometricMatchState:(long long)arg1 didBiometricsLockout:(bool)arg2 biometricsType:(long long)arg3;
+ (id)dictionaryForCancellationEvent:(unsigned long long)arg1 didBiometricsLockout:(bool)arg2;
+ (id)dictionaryForUserAction:(long long)arg1 didBiometricsLockout:(bool)arg2;

- (void)addBiometricMatchState:(long long)arg1;
- (void)addBiometricsState:(long long)arg1;
- (void)addClientMetadataForPaymentSheetRequest:(id)arg1;
- (void)addClientMetadataForPurchaseInfo:(id)arg1 metricsDictionary:(id)arg2;
- (void)addDualActionSuccess:(bool)arg1;
- (void)addUserActions:(id)arg1;

@end
