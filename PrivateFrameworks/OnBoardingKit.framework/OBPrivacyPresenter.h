
@interface OBPrivacyPresenter : NSObject <UIAdaptivePresentationControllerDelegate> {
    bool  _animatePresentAndDismiss;
    OBPrivacyCombinedController * _combinedController;
    UIColor * _customTintColor;
    bool  _darkMode;
    id /* block */  _dismissHandler;
    NSString * _displayLanguage;
    long long  _modalPresentationStyle;
    id /* block */  _presentationCompletionHandler;
    UIViewController * _presentedController;
    NSArray * _presentedIdentifiers;
    UIViewController * _presentingViewController;
    OBPrivacySplashController * _splashController;
    unsigned long long  _supportedInterfaceOrientations;
    bool  _underlineLinks;
    bool  _usesFullScreenPresentation;
}

@property (nonatomic) bool animatePresentAndDismiss;
@property (retain) OBPrivacyCombinedController *combinedController;
@property (nonatomic, retain) UIColor *customTintColor;
@property (nonatomic) bool darkMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ dismissHandler;
@property (nonatomic, retain) NSString *displayLanguage;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long modalPresentationStyle;
@property (copy) id /* block */ presentationCompletionHandler;
@property (retain) UIViewController *presentedController;
@property (retain) NSArray *presentedIdentifiers;
@property UIViewController *presentingViewController;
@property (retain) OBPrivacySplashController *splashController;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) bool underlineLinks;
@property (nonatomic) bool usesFullScreenPresentation;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

+ (id)presenterForPrivacySplashWithBundle:(id)arg1;
+ (id)presenterForPrivacySplashWithBundleAtPath:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacyUnifiedAboutWithBundles:(id)arg1;
+ (id)presenterForPrivacyUnifiedAboutWithBundlesAtPaths:(id)arg1;
+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (void)_presenterDidDismiss;
- (bool)animatePresentAndDismiss;
- (id)combinedController;
- (id)customTintColor;
- (bool)darkMode;
- (void)dismiss;
- (id /* block */)dismissHandler;
- (id)displayLanguage;
- (long long)modalPresentationStyle;
- (void)present;
- (void)presentInNavigationStack:(id)arg1;
- (void)presentInNavigationStack:(id)arg1 animated:(bool)arg2;
- (id /* block */)presentationCompletionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentedController;
- (id)presentedIdentifiers;
- (id)presentingViewController;
- (void)setAnimatePresentAndDismiss:(bool)arg1;
- (void)setCombinedController:(id)arg1;
- (void)setCustomTintColor:(id)arg1;
- (void)setDarkMode:(bool)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setDisplayLanguage:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setPresentationCompletionHandler:(id /* block */)arg1;
- (void)setPresentedController:(id)arg1;
- (void)setPresentedIdentifiers:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSplashController:(id)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)setUnderlineLinks:(bool)arg1;
- (void)setUsesFullScreenPresentation:(bool)arg1;
- (id)splashController;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)underlineLinks;
- (bool)usesFullScreenPresentation;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id /* block */)pk_defaultPresentationActionForContext:(unsigned long long)arg1;
+ (id)pk_presenterForContext:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI

+ (id)srui_presenterForPrivacySplash;

@end
