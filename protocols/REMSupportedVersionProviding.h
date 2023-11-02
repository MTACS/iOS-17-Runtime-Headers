
@protocol REMSupportedVersionProviding

@required

- (long long)effectiveMinimumSupportedVersion;
- (bool)isUnsupported;
- (long long)minimumSupportedVersion;

@end
