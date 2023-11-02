
@interface UIMutableCarPlayApplicationSceneSettings : UIMutableApplicationSceneSettings <UICarPlayApplicationSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableFiveRowKeyboards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableFiveRowKeyboards;
- (void)setDisableFiveRowKeyboards:(bool)arg1;

@end
