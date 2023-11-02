
@interface CPUIMutableTemplateApplicationSceneSettings : UIMutableApplicationSceneSettings <CPUITemplateApplicationSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mapStyle;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endpoint;
- (long long)mapStyle;
- (void)setEndpoint:(id)arg1;
- (void)setMapStyle:(long long)arg1;

@end
