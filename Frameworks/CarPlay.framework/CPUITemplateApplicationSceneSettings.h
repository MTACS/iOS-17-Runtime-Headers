
@interface CPUITemplateApplicationSceneSettings : UIApplicationSceneSettings <CPUITemplateApplicationSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (readonly) Class superclass;

- (id)endpoint;
- (long long)mapStyle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
