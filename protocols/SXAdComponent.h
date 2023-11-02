
@protocol SXAdComponent <SXComponent, SXComponentAdvertisingMetadataProviding>

@required

- (unsigned long long)adType;
- (UIColor *)debugColor;
- (NSString *)placementIdentifier;
- (unsigned long long)placementType;

@end
