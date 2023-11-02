
@interface _UINavigationBarTitleFontProvider : NSObject

+ (id)providerForIdiom:(long long)arg1;
+ (void)registerProviderClass:(Class)arg1 forIdiom:(long long)arg2;

- (id)defaultInlineTitleFont;
- (id)defaultLargeTitleFont;
- (id)defaultTitleFont;

@end
