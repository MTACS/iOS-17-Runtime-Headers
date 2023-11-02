
@interface CRSUITemplateDashboardWidgetSceneSettings : CRSUIDashboardWidgetSceneSettings <CRSUITemplateDashboardWidgetSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (nonatomic, readonly, copy) NSString *proxiedApplicationBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *templateEndpoint;
@property (nonatomic, readonly) unsigned long long widgetStyle;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)proxiedApplicationBundleIdentifier;
- (id)templateEndpoint;

@end
