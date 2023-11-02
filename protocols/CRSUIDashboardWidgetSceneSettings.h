
@protocol CRSUIDashboardWidgetSceneSettings <CRSUIMapStyleProviding>

@required

- (NSObject<OS_xpc_object> *)endpoint;
- (unsigned long long)widgetStyle;

@end
