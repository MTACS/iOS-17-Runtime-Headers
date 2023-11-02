
@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>

@property (nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *elementOverrides;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic) long long notificationBehavior;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentationRegion;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) unsigned long long restrictedCapabilities;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
