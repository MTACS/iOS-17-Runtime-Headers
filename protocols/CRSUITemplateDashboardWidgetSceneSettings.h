
@protocol CRSUITemplateDashboardWidgetSceneSettings <CRSUIDashboardWidgetSceneSettings>

@required

- (NSString *)proxiedApplicationBundleIdentifier;
- (NSObject<OS_xpc_object> *)templateEndpoint;

@end
