
@interface ISBundleIdentifierIcon : ISConcreteIcon {
    NSString * _bundleIdentifier;
}

@property (readonly) NSString *bundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_aspectRatio;
- (id)_makeResourceProviderAllowIconResourceFallback:(bool)arg1;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;

@end
