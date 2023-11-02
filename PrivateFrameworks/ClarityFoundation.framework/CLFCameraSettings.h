
@interface CLFCameraSettings : CLFBaseSettings

@property (nonatomic) bool allowPhotoCapture;
@property (nonatomic) bool allowSelfieCapture;
@property (nonatomic) bool allowSelfieVideoCapture;
@property (nonatomic) bool allowVideoCapture;

+ (id)allPreferenceSelectorsAsStrings;
+ (id)domainName;
+ (id)sharedInstance;

- (bool)allowPhotoCapture;
- (bool)allowSelfieCapture;
- (bool)allowSelfieVideoCapture;
- (bool)allowVideoCapture;
- (id)init;
- (void)setAllowPhotoCapture:(bool)arg1;
- (void)setAllowSelfieCapture:(bool)arg1;
- (void)setAllowSelfieVideoCapture:(bool)arg1;
- (void)setAllowVideoCapture:(bool)arg1;

@end
