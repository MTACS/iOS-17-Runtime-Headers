
@protocol SMUSystemDisplayLayoutElement <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSString *)extendedDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (NSString *)identifier;
- (long long)level;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceFrame;
- (bool)smu_isBrightnessControlHUD;
- (bool)smu_isControlCenter;
- (bool)smu_isPictureInPicture;
- (bool)smu_isPictureInPictureStashed;
- (bool)smu_isSystemIndicator;
- (bool)smu_isSystemNotification;
- (bool)smu_isSystemOverlay;
- (bool)smu_isVolumeHUD;

@end
