
@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings, CRSUIMutableMapStyleProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long widgetStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endpoint;
- (long long)mapStyle;
- (void)setEndpoint:(id)arg1;
- (void)setMapStyle:(long long)arg1;
- (void)setWidgetStyle:(unsigned long long)arg1;
- (unsigned long long)widgetStyle;

@end
