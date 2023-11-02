
@interface AXMCameraMetadataNode : AXMSourceNode

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void)triggerWithCameraType:(long long)arg1 cacheKey:(id)arg2 resultHandler:(id /* block */)arg3;

@end
