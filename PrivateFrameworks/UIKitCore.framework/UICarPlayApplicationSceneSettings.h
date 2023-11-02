
@interface UICarPlayApplicationSceneSettings : UIApplicationSceneSettings <UICarPlayApplicationSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableFiveRowKeyboards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)disableFiveRowKeyboards;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
