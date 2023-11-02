
@interface SearchUIUtilities : NSObject

+ (id)addAspectRatioConstraintForSize:(struct CGSize { double x1; double x2; })arg1 toView:(id)arg2;
+ (bool)appIsValidForBundleIdentifier:(id)arg1;
+ (id)bundleIdentifierForApp:(unsigned long long)arg1;
+ (bool)bundleIdentifierIsBlockedForScreenTimeExpiration:(id)arg1;
+ (bool)canShowViewController:(id)arg1;
+ (id)defaultBrowserBundleIdentifier;
+ (bool)deviceIsAuthenticated;
+ (bool)deviceSupportsRotation;
+ (void)dispatchAsyncIfNecessary:(id /* block */)arg1;
+ (void)dispatchMainIfNecessary:(id /* block */)arg1;
+ (bool)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg1 presentingViewControllerForExplanationAlert:(id)arg2;
+ (id)environmentForDelegate:(id)arg1;
+ (void)fetchURLForCoreSpotlightIdentifier:(id)arg1 fileProviderIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)fetchURLForFileResult:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)fileProviderItemIDForCoreSpotlightIdentifier:(id)arg1 fileProviderIdentifier:(id)arg2;
+ (id)fileProviderItemIDForFileResult:(id)arg1;
+ (id)fmfHandlesFromContact:(id)arg1;
+ (id)focusGroupIdentifier;
+ (id)hyphenatableStringForString:(id)arg1;
+ (double)imageAccessoryAdditionalCompactHorizontalMargin;
+ (id)imageForBlockedApp;
+ (bool)isAppInstalledWithBundleId:(id)arg1;
+ (bool)isIpad;
+ (bool)isLargeIpad;
+ (bool)isMinimizedHardwareKeyboardMode;
+ (bool)isPortraitForWindow:(id)arg1;
+ (bool)isWideScreen;
+ (id)localizedStringForKey:(id)arg1;
+ (double)onePixelForCurrentScreenResolution;
+ (id)openApplicationOptions;
+ (void)openPunchout:(id)arg1;
+ (void)openPunchout:(id)arg1 completion:(id /* block */)arg2;
+ (void)openURL:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)performAnimatableChanges:(id /* block */)arg1;
+ (void)performAnimatableChanges:(id /* block */)arg1 animated:(bool)arg2;
+ (void)performAnimatableChanges:(id /* block */)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
+ (void)playNegativeHaptic;
+ (id)pointerKeyMapTable;
+ (void)prewarmApplicationLibrary;
+ (void)requestClipInstallWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestDeviceUnlock:(id /* block */)arg1;
+ (void)requestDeviceUnlockWithSuccessHandler:(id /* block */)arg1;
+ (bool)resultBlockedForScreenTime:(id)arg1;
+ (bool)resultIsSiriAction:(id)arg1;
+ (id)skHandlesFromContact:(id)arg1;
+ (double)standardCompactHorizontalMargin;
+ (double)standardTableCellContentInset;
+ (id)stringForSFRichText:(id)arg1;
+ (id)stringForSFRichTextArray:(id)arg1;
+ (id)stringHandlesFromContact:(id)arg1;

@end
