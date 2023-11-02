
@interface SPSearchAppEntity : SPSearchEntity {
    NSString * _bundleIdentifier;
}

@property (readonly) NSString *bundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 flags:(id)arg5;
- (id)bundleIdentifier;
- (id)currentSearchString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2 fromSuggestion:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isAppEntitySearch;
- (bool)isScopedSearch;
- (id)spotlightQueryString;

@end
