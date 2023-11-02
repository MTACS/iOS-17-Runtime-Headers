
@interface SearchUIDefaultBrowserAppIconImage : SearchUIAppIconImage

+ (id)defaultBrowserBundleIdentifier;
+ (void)invalidateDefaultBrowserBundleIdentifier;

- (id)initWithVariant:(unsigned long long)arg1;
- (id)loadImageWithScale:(double)arg1 isDarkStyle:(bool)arg2;
- (bool)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg1;

@end
