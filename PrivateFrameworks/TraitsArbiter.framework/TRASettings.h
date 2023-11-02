
@interface TRASettings : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    TRASettingsAmbientPresentation * _ambientPresentationSettings;
    TRASettingsOrientation * _orientationSettings;
    TRASettingsUserInterfaceStyle * _userInterfaceStyleSettings;
    TRASettingsZOrderLevel * _zOrderLevelSettings;
}

@property (nonatomic, retain) TRASettingsAmbientPresentation *ambientPresentationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TRASettingsOrientation *orientationSettings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TRASettingsUserInterfaceStyle *userInterfaceStyleSettings;
@property (nonatomic, retain) TRASettingsZOrderLevel *zOrderLevelSettings;

- (void).cxx_destruct;
- (id)ambientPresentationSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)initWithZOrderLevelSettings:(id)arg1 orientationSettings:(id)arg2 ambientPresentationSettings:(id)arg3 userInterfaceStyleSettings:(id)arg4;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)orientationSettings;
- (void)setAmbientPresentationSettings:(id)arg1;
- (void)setOrientationSettings:(id)arg1;
- (void)setZOrderLevelSettings:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userInterfaceStyleSettings;
- (id)zOrderLevelSettings;

@end
