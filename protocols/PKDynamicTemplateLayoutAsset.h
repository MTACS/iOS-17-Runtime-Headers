
@protocol PKDynamicTemplateLayoutAsset <NSObject>

@required

+ (NSString *)assetKey;
+ (NSDictionary *)nameToAssetsMapFromDictionaries:(NSArray *)arg1;

- (NSDictionary *)configuration;
- (NSString *)name;
- (PKOSVersionRequirementRange *)osVersionRange;
- (void)setConfiguration:(NSDictionary *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setOsVersionRange:(PKOSVersionRequirementRange *)arg1;

@end
