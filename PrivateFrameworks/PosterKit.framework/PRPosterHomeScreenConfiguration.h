
@interface PRPosterHomeScreenConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding, PRPosterRoleAttribute>

@property (nonatomic, readonly) NSString *attributeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) PRPosterGradientHomeScreenAppearance *gradientAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) PRPosterHomePosterHomeScreenAppearance *homePosterAppearance;
@property (nonatomic, readonly, copy) PRPosterLockPosterHomeScreenAppearance *lockPosterAppearance;
@property (nonatomic, readonly, copy) PRPosterHomeScreenAppearance *selectedAppearance;
@property (nonatomic, readonly) unsigned long long selectedAppearanceType;
@property (nonatomic, readonly, copy) PRPosterSolidColorHomeScreenAppearance *solidColorAppearance;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)decodeObjectWithJSON:(id)arg1;
+ (id)defaultHomeScreenConfigurationForProvider:(id)arg1 role:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)attributeType;
- (Class)classForCoder;
- (id)configurationApplyingColorPickerConfigurationsFromConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeJSON;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeScreenConfiguration:(id)arg1;
- (id)initWithSelectedAppearanceType:(unsigned long long)arg1 lockPosterAppearance:(id)arg2 solidColorAppearance:(id)arg3 gradientAppearance:(id)arg4 homePosterAppearance:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)selectedAppearance;

@end
