
@interface MPUFontDescriptorCache : NSObject {
    unsigned long long  _maximumCapacity;
    NSMutableArray * _orderedCachedFontDescriptors;
    MPUMutableFontDescriptor * _reusableMutableFontDescriptor;
}

+ (id)sharedFontDescriptorCache;

- (void).cxx_destruct;
- (id)_cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)cachedImmutableFontDescriptorForConfigurationBlock:(id /* block */)arg1;
- (id)cachedImmutableFontDescriptorMatchingMutableFontDescriptor:(id)arg1;
- (void)dealloc;
- (id)init;

@end
