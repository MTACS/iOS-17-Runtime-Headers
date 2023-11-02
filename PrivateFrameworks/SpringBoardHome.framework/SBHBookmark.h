
@interface SBHBookmark : NSObject <SBLeafIconDataSource> {
    CPSWebClip * _appClip;
    NSString * _placeholderBundleIdentifier;
    UIWebClip * _webClip;
}

@property (nonatomic, readonly) CPSWebClip *appClip;
@property (nonatomic, readonly, copy) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isAppClip;
@property (nonatomic, readonly) bool isShortcutsWebClip;
@property (nonatomic, readonly) bool isSingleStepShortcutWebClip;
@property (nonatomic, readonly) NSURL *launchURL;
@property (nonatomic, copy) NSString *placeholderBundleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly) UIWebClip *webClip;

- (void).cxx_destruct;
- (void)_cleanupAppClipIfNecessary;
- (void)_deviceUnlockedForFirstTime:(id)arg1;
- (id)appClip;
- (bool)canGenerateIconsInBackgroundForIcon:(id)arg1;
- (void)dealloc;
- (id)folderFallbackTitleForIcon:(id)arg1;
- (id)folderTitleOptionsForIcon:(id)arg1;
- (id)iTunesCategoriesOrderedByRelevancyForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)iconCompleteUninstall:(id)arg1;
- (bool)iconSupportsUninstall:(id)arg1;
- (id)identifier;
- (id)initWithWebClip:(id)arg1;
- (bool)isAppClip;
- (bool)isShortcutsWebClip;
- (bool)isSingleStepShortcutWebClip;
- (bool)isUninstallSupported;
- (id)launchURL;
- (id)placeholderBundleIdentifier;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)setPlaceholderBundleIdentifier:(id)arg1;
- (unsigned long long)supportedGridSizeClassesForIcon:(id)arg1;
- (id)uniqueIdentifier;
- (id)webClip;

@end
