
@interface LPiTunesMediaLookupTask : AMSLookup {
    NSArray * _bundleIdentifiers;
    NSArray * _identifiers;
    NSString * _storefrontCountryCode;
}

- (void).cxx_destruct;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (id)callerID;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2;
- (id)sharedBag;
- (void)start:(id /* block */)arg1;

@end
