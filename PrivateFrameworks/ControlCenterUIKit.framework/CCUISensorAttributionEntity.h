
@interface CCUISensorAttributionEntity : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _executableDisplayName;
    bool  _isSystemService;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *displayNameForCompactView;
@property (nonatomic, copy) NSString *executableDisplayName;
@property (nonatomic) bool isSystemService;

+ (id)attributionEntityFromSensorActivityData:(id)arg1;
+ (id)genericLocationSystemServiceEntity;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)displayNameForCompactView;
- (id)executableDisplayName;
- (unsigned long long)hash;
- (bool)isContinuityCaptureExtension;
- (bool)isEqual:(id)arg1;
- (bool)isGenericLocationSystemServiceEntity;
- (bool)isKeyboardCameraEntity;
- (bool)isSetupApp;
- (bool)isSiriAndDictationEntity;
- (bool)isSystemService;
- (bool)isWalletSpecialEntity;
- (void)setBundleIdentifier:(id)arg1;
- (void)setExecutableDisplayName:(id)arg1;
- (void)setIsSystemService:(bool)arg1;

@end
