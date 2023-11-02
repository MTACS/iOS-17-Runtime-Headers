
@protocol PBFExtensionProviding <PBFExtensionInstanceProviding>

@required

- (<PRPosterExtensionDescribing> *)providerForExtensionIdentifier:(NSString *)arg1;
- (<PRPosterExtensionDescribing> *)providerForPath:(PRSServerPosterPath *)arg1;

@end
