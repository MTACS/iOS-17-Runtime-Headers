
@interface VolumeSettingStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithVolumeSettingStateToConfirm:(long long)arg1;
+ (id)successWithResolvedVolumeSettingState:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
