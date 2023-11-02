
@interface CRSUIDashboardWidgetSceneSettings : UICarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long widgetStyle;

- (id)endpoint;
- (long long)mapStyle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)widgetStyle;

@end
