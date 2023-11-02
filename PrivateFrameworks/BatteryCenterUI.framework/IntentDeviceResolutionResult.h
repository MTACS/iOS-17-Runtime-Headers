
@interface IntentDeviceResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithIntentDeviceToConfirm:(id)arg1;
+ (id)disambiguationWithIntentDevicesToDisambiguate:(id)arg1;
+ (id)successWithResolvedIntentDevice:(id)arg1;
+ (bool)supportsSecureCoding;

@end
