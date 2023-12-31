
@interface DDActionSuggestionsContext : NSObject {
    NSString * _bundleIdentifier;
    NSString * _coreSpotlightUniqueIdentifier;
}

@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *coreSpotlightUniqueIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)coreSpotlightUniqueIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCoreSpotlightUniqueIdentifier:(id)arg1;

@end
