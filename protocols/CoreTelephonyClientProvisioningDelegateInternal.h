
@protocol CoreTelephonyClientProvisioningDelegateInternal <NSObject>

@optional

- (void)dedicatedBearedRemoved:(NSString *)arg1;
- (void)dedicatedBearerAdded:(NSString *)arg1 success:(bool)arg2;
- (void)dedicatedBearerSupportChanged:(bool)arg1;
- (void)qoSLinkCharacteristicsChanged:(CTQoSLinkCharacteristics *)arg1;
- (void)stewieSupportChanged;
- (void)transportKeysChanged;

@end
