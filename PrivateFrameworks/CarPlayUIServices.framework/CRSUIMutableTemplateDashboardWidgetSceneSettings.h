
@interface CRSUIMutableTemplateDashboardWidgetSceneSettings : CRSUIMutableDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic, copy) NSString *proxiedApplicationBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSObject<OS_xpc_object> *templateEndpoint;
@property (nonatomic, readonly) unsigned long long widgetStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)proxiedApplicationBundleIdentifier;
- (void)setProxiedApplicationBundleIdentifier:(id)arg1;
- (void)setTemplateEndpoint:(id)arg1;
- (id)templateEndpoint;

@end
