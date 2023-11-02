
@interface WFAppIconColorMatcher : NSObject {
    NSString * _bundleIdentifier;
    WFMatchedAppIconColorData * _cachedColor;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) WFMatchedAppIconColorData *cachedColor;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)cachedColor;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)matchedColor;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCachedColor:(id)arg1;

@end
