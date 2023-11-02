
@protocol BNTemplateContentProviding <NSObject>

@required

- (bool)providesTemplateContent;

@optional

- (void)handleTemplateContentEvent:(long long)arg1;
- (<BNTemplateViewProviding> *)leadingTemplateViewProvider;
- (NSString *)presentableAccessibilityIdentifier;
- (<BNTemplateItemProviding> *)primaryTemplateItemProvider;
- (<BNTemplateItemProviding> *)secondaryTemplateItemProvider;
- (<BNTemplateViewProviding> *)trailingTemplateViewProvider;

@end
