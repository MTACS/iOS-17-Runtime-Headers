
@interface NTKFaceBundle : NSObject

@property (nonatomic, readonly) Class faceClass;
@property (nonatomic, readonly) Class faceViewClass;
@property (nonatomic, readonly) NSString *galleryDescriptionText;
@property (nonatomic, readonly) NSString *galleryTitle;

+ (id)_localizedMarkdownStringForKey:(id)arg1 table:(id)arg2 suffix:(id)arg3 comment:(id)arg4;
+ (id)_localizedStringForKey:(id)arg1 table:(id)arg2 suffix:(id)arg3 comment:(id)arg4;
+ (id)analyticsIdentifier;
+ (unsigned long long)argon_defaultNotificationAction;
+ (id)identifier;
+ (id)imageWithName:(id)arg1;
+ (id)localizedMarkdownStringForKey:(id)arg1 comment:(id)arg2;
+ (id)localizedMarkdownStringForKey:(id)arg1 table:(id)arg2 comment:(id)arg3;
+ (id)localizedMarkdownStringForKey:(id)arg1 tableSuffix:(id)arg2 comment:(id)arg3;
+ (id)localizedStringForKey:(id)arg1 comment:(id)arg2;
+ (id)localizedStringForKey:(id)arg1 table:(id)arg2 comment:(id)arg3;
+ (id)localizedStringForKey:(id)arg1 tableSuffix:(id)arg2 comment:(id)arg3;
+ (id)logCategoryName;
+ (id)logObject;

- (void)argon_generateNotificationContentWithCompletion:(id /* block */)arg1;
- (id)artistFacesForDevice:(id)arg1;
- (id)defaultFaceForDevice:(id)arg1;
- (Class)faceClass;
- (Class)faceViewClass;
- (id)galleryDefaultPigmentOptionsForDevice:(id)arg1;
- (id)galleryDescriptionForDevice:(id)arg1;
- (id)galleryDescriptionText;
- (id)galleryFacesForDevice:(id)arg1;
- (id)galleryTitle;
- (id)galleryTitleForDevice:(id)arg1;
- (id)heroFacesForDevice:(id)arg1;
- (id)heroGloryBDefaultFacesForDevice:(id)arg1;
- (id)heroGloryEDefaultFacesForDevice:(id)arg1;
- (id)heroGloryFDefaultFacesForDevice:(id)arg1;
- (id)heroGraceDefaultFacesForDevice:(id)arg1;
- (id)heroLegacyDefaultFacesForDevice:(id)arg1;
- (id)heroPride2020DefaultFacesForDevice:(id)arg1;
- (id)heroSpring2020DefaultFacesForDevice:(id)arg1;
- (bool)isHardwareSpecific;
- (id)legacyFaceStyle;
- (id)prideFacesForDevice:(id)arg1;
- (id)unityFacesForDevice:(id)arg1;

@end
