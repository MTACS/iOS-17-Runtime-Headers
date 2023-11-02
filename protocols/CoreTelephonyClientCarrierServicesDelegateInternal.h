
@protocol CoreTelephonyClientCarrierServicesDelegateInternal <NSObject>

@optional

- (void)sweetgumAppsChanged:(CTServiceDescriptor *)arg1;
- (void)sweetgumCapabilitiesChanged:(CTSweetgumCapabilities *)arg1 serviceDescriptor:(CTServiceDescriptor *)arg2;
- (void)sweetgumDataPlanMetricsChanged:(CTServiceDescriptor *)arg1;
- (void)sweetgumPlansChanged:(CTServiceDescriptor *)arg1;
- (void)sweetgumUsageChanged:(CTServiceDescriptor *)arg1;
- (void)sweetgumUserConsentInfoChanged:(CTServiceDescriptor *)arg1;

@end
