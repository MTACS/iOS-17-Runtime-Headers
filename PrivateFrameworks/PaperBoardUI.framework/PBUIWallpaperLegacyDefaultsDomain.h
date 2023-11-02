
@interface PBUIWallpaperLegacyDefaultsDomain : BSAbstractDefaultDomain

@property (nonatomic, retain) NSData *homeScreenColorData;
@property (nonatomic, retain) NSString *homeScreenColorName;
@property (nonatomic, retain) NSString *homeScreenCropRectString;
@property (nonatomic, retain) NSData *homeScreenGradientData;
@property (nonatomic, retain) NSData *homeScreenImageHashData;
@property (nonatomic) bool homeScreenMagnifyEnabled;
@property (nonatomic) double homeScreenParallaxFactor;
@property (nonatomic) bool homeScreenPortrait;
@property (nonatomic) bool homeScreenSupportsCropping;
@property (nonatomic, retain) NSString *homeScreenWallpaperIdentifier;
@property (nonatomic, retain) NSDictionary *homeScreenWallpaperKitData;
@property (nonatomic, retain) NSString *homeScreenWallpaperName;
@property (nonatomic, retain) NSDictionary *homeScreenWallpaperOptions;
@property (nonatomic) bool homeScreenWallpaperWasUserSet;
@property (nonatomic) double homeScreenZoomScale;
@property (nonatomic, retain) NSData *lockScreenColorData;
@property (nonatomic, retain) NSString *lockScreenColorName;
@property (nonatomic, retain) NSString *lockScreenCropRectString;
@property (nonatomic, retain) NSData *lockScreenGradientData;
@property (nonatomic) bool lockScreenHasVideo;
@property (nonatomic, retain) NSData *lockScreenImageHashData;
@property (nonatomic) bool lockScreenMagnifyEnabled;
@property (nonatomic) double lockScreenParallaxFactor;
@property (nonatomic) bool lockScreenPortrait;
@property (nonatomic) double lockScreenStillTimeInVideo;
@property (nonatomic) bool lockScreenSupportsCropping;
@property (nonatomic, retain) NSString *lockScreenWallpaperIdentifier;
@property (nonatomic, retain) NSDictionary *lockScreenWallpaperKitData;
@property (nonatomic, retain) NSString *lockScreenWallpaperName;
@property (nonatomic, retain) NSDictionary *lockScreenWallpaperOptions;
@property (nonatomic) bool lockScreenWallpaperWasUserSet;
@property (nonatomic) double lockScreenZoomScale;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
