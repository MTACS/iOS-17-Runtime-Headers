
@interface TRAMutableSettings : TRASettings

@property (nonatomic, retain) TRASettingsAmbientPresentation *ambientPresentationSettings;
@property (nonatomic, retain) TRASettingsOrientation *orientationSettings;
@property (nonatomic, retain) TRASettingsUserInterfaceStyle *userInterfaceStyleSettings;
@property (nonatomic, retain) TRASettingsZOrderLevel *zOrderLevelSettings;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAmbientPresentationSettings:(id)arg1;
- (void)setOrientationSettings:(id)arg1;
- (void)setUserInterfaceStyleSettings:(id)arg1;
- (void)setZOrderLevelSettings:(id)arg1;

@end
