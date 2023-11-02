
@protocol HDFeatureSettingsManagerObserver <NSObject>

@required

- (void)featureSettingsManager:(HDFeatureSettingsManager *)arg1 didUpdateSettingsForFeatureIdentifier:(NSString *)arg2;

@end
