
@protocol BNTemplateItemProviding <NSObject, NSSecureCoding>

@required

- (NSString *)accessibilityIdentifier;
- (bool)isHidden;
- (void)setAccessibilityIdentifier:(NSString *)arg1;
- (void)setHidden:(bool)arg1;
- (void)setVisualStyle:(long long)arg1;
- (void)setVisualStyleCategory:(long long)arg1;
- (long long)visualStyle;
- (long long)visualStyleCategory;

@end
