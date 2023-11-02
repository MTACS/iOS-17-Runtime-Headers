
@interface ContextualSuggestionClient.SpecialWidgetDescriptor : CHSWidgetDescriptor

- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 intentType:(id)arg5 supportedSizeClasses:(unsigned long long)arg6 widgetDescription:(id)arg7 widgetVisibility:(long long)arg8;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 supportedFamilies:(unsigned long long)arg4 intentType:(id)arg5;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 supportedFamilies:(unsigned long long)arg3 intentType:(id)arg4;
- (id)initWithExtensionIdentity:(id)arg1 kind:(id)arg2 supportedFamilies:(unsigned long long)arg3 intentType:(id)arg4;
- (id)initWithExtensionIdentity:(id)arg1 supportedFamilies:(unsigned long long)arg2;

@end
