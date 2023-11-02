
@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding, UIMutableTraitsInternal, _UIFallbackEnvironment> {
    struct { 
        long long userInterfaceIdiom; 
        double displayScale; 
        long long displayGamut; 
        long long touchLevel; 
        unsigned long long interactionModel; 
        unsigned long long primaryInteractionModel; 
        long long artworkSubtype; 
        long long horizontalSizeClass; 
        long long verticalSizeClass; 
        long long userInterfaceStyle; 
        long long layoutDirection; 
        long long forceTouchCapability; 
        long long preferredContentSizeCategory; 
        double displayCornerRadius; 
        long long legibilityWeight; 
        long long semanticContext; 
        long long presentationSemanticContext; 
        long long splitViewControllerContext; 
        long long accessibilityContrast; 
        long long userInterfaceLevel; 
        long long vibrancy; 
        long long userInterfaceRenderingMode; 
        long long activeAppearance; 
        long long focusSystemState; 
        long long selectionIsKey; 
        long long backlightLuminance; 
        long long toolbarItemPresentationSize; 
    }  _builtinTraits;
    NSDictionary * _clientDefinedTraits;
    NSObject * _environmentWrapper;
    struct { 
        unsigned int isMutable : 1; 
        unsigned int isFallback : 1; 
        unsigned int hasCachedTraitCollectionRelevantForImageConfiguration : 1; 
    }  _flags;
    _UITraitTokenSet * _specifiedTraitTokens;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) NSObject *_environmentWrapper;
@property (nonatomic, readonly) bool _isLargeContentViewerEnabled;
@property (nonatomic, readonly) NSArray *_specifiedTraitTokensArray;
@property (nonatomic, readonly) NSSet *_specifiedTraits;
@property (nonatomic, readonly) bool _swiftui_sceneIsCaptured;
@property (nonatomic, readonly) UIColor *_tintColor;
@property (setter=_setTypesettingLanguageAwareLineHeightRatio:, nonatomic) double _typesettingLanguageAwareLineHeightRatio;
@property (nonatomic, readonly) long long accessibilityContrast;
@property (nonatomic, readonly) long long activeAppearance;
@property (nonatomic, readonly) long long ambientDisplayStyle;
@property (getter=isAmbientPresented, nonatomic, readonly) bool ambientPresented;
@property (nonatomic, readonly) NSString *cps_invocationCardPreferredContentSizeCategory;
@property (nonatomic, readonly) long long crsui_mapStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) double displayPixel;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) long long forceTouchCapability;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) ICAppearanceInfo *ic_appearanceInfo;
@property (nonatomic, readonly) bool ic_hasCompactHeight;
@property (nonatomic, readonly) bool ic_hasCompactSize;
@property (nonatomic, readonly) bool ic_hasCompactWidth;
@property (nonatomic, readonly) bool ic_isDark;
@property (nonatomic, readonly) long long imageDynamicRange;
@property (nonatomic, readonly) long long layoutDirection;
@property (nonatomic, readonly) long long legibilityWeight;
@property (nonatomic, readonly) double mf_leadingEdgeToBackButtonText;
@property (nonatomic, readonly) bool mr_shouldDim;
@property (nonatomic, readonly, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) long long prs_accessibilityContrast;
@property (nonatomic, readonly) long long prs_interfaceStyle;
@property (nonatomic, readonly) long long prx_cardSizeClass;
@property (nonatomic, readonly) long long sceneCaptureState;
@property (nonatomic, readonly) UIColor *sf_alternateTintColor;
@property (nonatomic, readonly) long long sf_alternateUserInterfaceStyle;
@property (nonatomic, readonly) UIBlurEffect *sf_backgroundBlurEffect;
@property (nonatomic, readonly) UITraitCollection *sf_traitCollectionWithAlternateUserInterfaceColorAsPrimary;
@property (nonatomic, readonly) bool sf_usesSidebarPresentation;
@property (nonatomic, readonly) bool sf_usesVibrantAppearance;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long toolbarItemPresentationSize;
@property (nonatomic, readonly) NSString *typesettingLanguage;
@property (nonatomic, readonly) long long userInterfaceIdiom;
@property (nonatomic, readonly) long long userInterfaceLevel;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) double vk_contentSizeScaleFactor;
@property (nonatomic, readonly) bool vk_hasCompactHeight;
@property (nonatomic, readonly) bool vk_hasCompactSize;
@property (nonatomic, readonly) bool vk_hasCompactWidth;
@property (nonatomic, readonly) bool vk_isDark;
@property (nonatomic, readonly) bool vk_isOptimizedForMac;
@property (nonatomic, readonly) bool vk_isRTL;
@property (nonatomic, readonly) bool vk_shouldUseLargeButtons;
@property (nonatomic, readonly) UITraitCollection *vk_traitCollectionClampedToNonaccessibilityContentSize;
@property (nonatomic, readonly) unsigned long long vuiPreferredContentSizeCategory;
@property (nonatomic, readonly) unsigned long long vuiUserInterfaceStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_currentTraitCollection;
+ (id)_defineCGFloatTraitWithName:(id)arg1 identifier:(id)arg2 defaultValue:(double)arg3 affectsColorAppearance:(bool)arg4 defaultValueRepresentsUnspecified:(bool)arg5 isPrivate:(bool)arg6 placeholderToken:(id)arg7;
+ (id)_defineNSIntegerTraitWithName:(id)arg1 identifier:(id)arg2 defaultValue:(long long)arg3 affectsColorAppearance:(bool)arg4 defaultValueRepresentsUnspecified:(bool)arg5 isPrivate:(bool)arg6 placeholderToken:(id)arg7;
+ (id)_defineObjectTraitWithName:(id)arg1 identifier:(id)arg2 defaultValue:(id)arg3 affectsColorAppearance:(bool)arg4 defaultValueRepresentsUnspecified:(bool)arg5 isPrivate:(bool)arg6 placeholderToken:(id)arg7;
+ (id)_descriptionForChangeFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
+ (id)_existingTraitTokenReservingPlaceholderIfNecessaryWithName:(id)arg1 identifier:(id)arg2;
+ (id)_identifierForTrait:(Class)arg1;
+ (bool)_isPlaceholderTraitToken:(id)arg1;
+ (id)_nameForTrait:(Class)arg1;
+ (void)_setCurrentTraitCollection:(id)arg1;
+ (id)_systemTraitTokensAffectingColorAppearance;
+ (id)_systemTraitTokensAffectingImageLookup;
+ (id)_traitCollectionForSidebarAppearance;
+ (id)_traitCollectionWithBackgroundLevel:(long long)arg1;
+ (id)_traitCollectionWithBacklightLuminance:(long long)arg1;
+ (id)_traitCollectionWithCGFloatValue:(double)arg1 forTraitToken:(id)arg2;
+ (id)_traitCollectionWithContrast:(long long)arg1;
+ (id)_traitCollectionWithEnvironmentWrapper:(id)arg1;
+ (id)_traitCollectionWithFocusSystemState:(long long)arg1;
+ (id)_traitCollectionWithNSIntegerValue:(long long)arg1 forTraitToken:(id)arg2;
+ (id)_traitCollectionWithNSUIntegerValue:(unsigned long long)arg1 forTraitToken:(id)arg2;
+ (id)_traitCollectionWithObject:(id)arg1 forTraitToken:(id)arg2;
+ (id)_traitCollectionWithPresentationSemanticContext:(long long)arg1;
+ (id)_traitCollectionWithSplitViewControllerContext:(long long)arg1;
+ (id)_traitCollectionWithTypesettingLanguageAwareLineHeightRatio:(double)arg1;
+ (id)_traitCollectionWithUserInterfaceActiveAppearance:(long long)arg1;
+ (id)_traitCollectionWithUserInterfaceRenderingMode:(long long)arg1;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)_traitCollectionWithVibrancy:(long long)arg1;
+ (id)currentTraitCollection;
+ (void)initialize;
+ (void)setCurrentTraitCollection:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)systemTraitsAffectingColorAppearance;
+ (id)systemTraitsAffectingImageLookup;
+ (id)traitCollectionWithAccessibilityContrast:(long long)arg1;
+ (id)traitCollectionWithActiveAppearance:(long long)arg1;
+ (id)traitCollectionWithArtworkSubtype:(unsigned long long)arg1;
+ (id)traitCollectionWithCGFloatValue:(double)arg1 forTrait:(Class)arg2;
+ (id)traitCollectionWithDisplayCornerRadius:(double)arg1;
+ (id)traitCollectionWithDisplayGamut:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithForceTouchCapability:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithImageDynamicRange:(long long)arg1;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithLayoutDirection:(long long)arg1;
+ (id)traitCollectionWithLegibilityWeight:(long long)arg1;
+ (id)traitCollectionWithNSIntegerValue:(long long)arg1 forTrait:(Class)arg2;
+ (id)traitCollectionWithNSUIntegerValue:(unsigned long long)arg1 forTrait:(Class)arg2;
+ (id)traitCollectionWithObject:(id)arg1 forTrait:(Class)arg2;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)arg1;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1;
+ (id)traitCollectionWithSceneCaptureState:(long long)arg1;
+ (id)traitCollectionWithToolbarItemPresentationSize:(long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithTraits:(id /* block */)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (id)traitCollectionWithTypesettingLanguage:(id)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceLevel:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)arg1;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;

- (long long)_backgroundLevel;
- (long long)_backlightLuminance;
- (id)_changedTraitTokensArrayFromTraitCollection:(id)arg1;
- (long long)_compare:(id)arg1;
- (long long)_contrast;
- (id)_description;
- (id)_environmentWrapper;
- (void*)_fallbackTraitCollection;
- (long long)_focusSystemState;
- (bool)_hasSplitViewControllerContextPrimaryColumn;
- (bool)_hasSplitViewControllerContextSidebarColumn;
- (bool)_isLargeContentViewerEnabled;
- (bool)_isTraitSpecified:(Class)arg1;
- (bool)_isTraitTokenSpecified:(id)arg1;
- (id)_namedImageDescription;
- (id)_objectForTraitToken:(id)arg1;
- (long long)_presentationSemanticContext;
- (void)_setCGFloatValue:(double)arg1 forTraitToken:(id)arg2;
- (void)_setEnvironmentWrapper:(id)arg1;
- (void)_setNSIntegerValue:(long long)arg1 forTraitToken:(id)arg2;
- (void)_setNSUIntegerValue:(unsigned long long)arg1 forTraitToken:(id)arg2;
- (void)_setObject:(id)arg1 forTraitToken:(id)arg2;
- (void)_setTintColor:(id)arg1;
- (void)_setTypesettingLanguageAwareLineHeightRatio:(double)arg1;
- (id)_specifiedTraitTokensArray;
- (id)_specifiedTraits;
- (long long)_splitViewControllerContext;
- (id)_tintColor;
- (id)_traitCollectionByFilteringTraitTokens:(id)arg1;
- (id)_traitCollectionByRemovingEnvironmentWrapper;
- (id)_traitCollectionByRemovingTrait:(Class)arg1;
- (id)_traitCollectionByRemovingTraitToken:(id)arg1;
- (id)_traitCollectionByReplacingCGFloatValue:(double)arg1 forTraitToken:(id)arg2;
- (id)_traitCollectionByReplacingNSIntegerValue:(long long)arg1 forTraitToken:(id)arg2;
- (id)_traitCollectionByReplacingNSUIntegerValue:(unsigned long long)arg1 forTraitToken:(id)arg2;
- (id)_traitCollectionByReplacingObject:(id)arg1 forTraitToken:(id)arg2;
- (id)_traitsDescription;
- (id)_traitsDescriptionMatching:(id)arg1;
- (double)_typesettingLanguageAwareLineHeightRatio;
- (long long)_updateFidelity;
- (long long)_userInterfaceActiveAppearance;
- (long long)_userInterfaceRenderingMode;
- (double)_valueForCGFloatTraitToken:(id)arg1;
- (long long)_valueForNSIntegerTraitToken:(id)arg1;
- (unsigned long long)_valueForNSUIntegerTraitToken:(id)arg1;
- (id)_valueForTraitNamed:(id)arg1;
- (long long)_vibrancy;
- (long long)accessibilityContrast;
- (long long)activeAppearance;
- (unsigned long long)artworkSubtype;
- (id)changedTraitsFromTraitCollection:(id)arg1;
- (bool)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)displayCornerRadius;
- (long long)displayGamut;
- (double)displayScale;
- (void)encodeWithCoder:(id)arg1;
- (long long)forceTouchCapability;
- (bool)hasDifferentColorAppearanceComparedToTraitCollection:(id)arg1;
- (unsigned long long)hash;
- (long long)horizontalSizeClass;
- (id)imageConfiguration;
- (long long)imageDynamicRange;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionModel;
- (bool)isEqual:(id)arg1;
- (long long)layoutDirection;
- (long long)legibilityWeight;
- (id)objectForTrait:(Class)arg1;
- (void)performAsCurrentTraitCollection:(id /* block */)arg1;
- (id)preferredContentSizeCategory;
- (unsigned long long)primaryInteractionModel;
- (long long)sceneCaptureState;
- (void)setAccessibilityContrast:(long long)arg1;
- (void)setActiveAppearance:(long long)arg1;
- (void)setCGFloatValue:(double)arg1 forTrait:(Class)arg2;
- (void)setDisplayGamut:(long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setForceTouchCapability:(long long)arg1;
- (void)setHorizontalSizeClass:(long long)arg1;
- (void)setImageDynamicRange:(long long)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setLegibilityWeight:(long long)arg1;
- (void)setNSIntegerValue:(long long)arg1 forTrait:(Class)arg2;
- (void)setNSUIntegerValue:(unsigned long long)arg1 forTrait:(Class)arg2;
- (void)setObject:(id)arg1 forTrait:(Class)arg2;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setSceneCaptureState:(long long)arg1;
- (void)setToolbarItemPresentationSize:(long long)arg1;
- (void)setTypesettingLanguage:(id)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void)setUserInterfaceLevel:(long long)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setVerticalSizeClass:(long long)arg1;
- (long long)toolbarItemPresentationSize;
- (long long)touchLevel;
- (id)traitCollectionByFilteringTraits:(id)arg1;
- (id)traitCollectionByModifyingTraits:(id /* block */)arg1;
- (id)traitCollectionByReplacingCGFloatValue:(double)arg1 forTrait:(Class)arg2;
- (id)traitCollectionByReplacingNSIntegerValue:(long long)arg1 forTrait:(Class)arg2;
- (id)traitCollectionByReplacingNSUIntegerValue:(unsigned long long)arg1 forTrait:(Class)arg2;
- (id)traitCollectionByReplacingObject:(id)arg1 forTrait:(Class)arg2;
- (id)typesettingLanguage;
- (long long)userInterfaceIdiom;
- (long long)userInterfaceLevel;
- (long long)userInterfaceStyle;
- (double)valueForCGFloatTrait:(Class)arg1;
- (long long)valueForNSIntegerTrait:(Class)arg1;
- (unsigned long long)valueForNSUIntegerTrait:(Class)arg1;
- (long long)verticalSizeClass;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (bool)_lp_prefersDarkInterface;
- (bool)_lp_prefersHighContrast;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (bool)mf_hasCompactDimension;
- (bool)mf_supportsPopoverPresentation;
- (bool)mf_useSplitViewStyling;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (bool)_swiftui_sceneIsCaptured;

// Image: /System/Library/PrivateFrameworks/AmbientUIServices.framework/AmbientUIServices

- (long long)ambientDisplayStyle;
- (bool)isAmbientPresented;

// Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices

+ (id)crsui_traitCollectionWithMapStyle:(long long)arg1;

- (long long)crsui_mapStyle;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)ck_chatItemLayoutNeedsInvalidationForPreviousTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices

- (id)cps_invocationCardPreferredContentSizeCategory;

// Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore

+ (id)doc_traitsAffectingFonts;

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })doc_NSDirectionalEdgeInsetsFromInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })doc_UIEdgeInsetsFromDirectionalInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (double)displayPixel;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (bool)hu_hasExtendedWidth;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

- (double)mf_leadingEdgeToBackButtonText;
- (bool)mf_traitDifferenceAffectsTextLayout:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (bool)_mapsUI_isWithinMUPlatterView;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (bool)mr_shouldDim;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)sf_traitCollectionUsingVibrantAppearance;
+ (id)sf_traitCollectionWithAlternateTintColor:(id)arg1;
+ (id)sf_traitCollectionWithAlternateUserInterfaceStyle:(long long)arg1;
+ (id)sf_traitCollectionWithBackgroundBlurEffect:(id)arg1;
+ (id)sf_traitCollectionWithSidebarPresentation:(bool)arg1;

- (id)sf_alternateTintColor;
- (long long)sf_alternateUserInterfaceStyle;
- (id)sf_backgroundBlurEffect;
- (bool)sf_hasSameTextAppearanceAs:(id)arg1;
- (bool)sf_hasSameVisualEffectAs:(id)arg1;
- (id)sf_traitCollectionWithAlternateUserInterfaceColorAsPrimary;
- (bool)sf_usesSidebarPresentation;
- (bool)sf_usesVibrantAppearance;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)ic_alwaysShowLightContent;
+ (void)setIc_alwaysShowLightContent:(bool)arg1;

- (id)ic_appearanceInfo;
- (bool)ic_hasCompactHeight;
- (bool)ic_hasCompactSize;
- (bool)ic_hasCompactWidth;
- (bool)ic_hasEqualSizeToTraitCollection:(id)arg1;
- (bool)ic_isDark;
- (void)ic_performAsCurrent:(id /* block */)arg1;
- (id)ic_traitCollectionByAppendingNonNilTraitCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_traitCollectionCompatibleWithContext:(id)arg1;
+ (id)pbf_traitCollectionForDisplayContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit

+ (id)prx_traitCollectionWithCardSizeClass:(long long)arg1;

- (long long)prx_cardSizeClass;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (long long)prs_accessibilityContrast;
- (long long)prs_interfaceStyle;

// Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI

+ (id)traitCollectionWithUserInterfaceStyleCompatibleWithLegibilitySettings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (id)sbui_bestTraitCollection;
+ (id)sbui_traitCollectionForElement:(id)arg1;

- (id)sbui_preferredContentSizeCategoryAllowingTraitsForCustomLayoutMode:(bool)arg1;
- (id)sbui_traitCollectionAllowingTraitsForCustomLayoutMode:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (bool)isPreferredContentSizeCategoryAccessible;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)current;

- (bool)isAXEnabled;
- (bool)isAXLargeEnabled;
- (bool)isAXSmallEnabled;
- (unsigned long long)vuiPreferredContentSizeCategory;
- (unsigned long long)vuiUserInterfaceStyle;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (id)appearanceClassForType:(long long)arg1;

- (double)vk_contentSizeScaleFactor;
- (bool)vk_hasCompactHeight;
- (bool)vk_hasCompactSize;
- (bool)vk_hasCompactWidth;
- (bool)vk_hasEqualSizeToTraitCollection:(id)arg1;
- (bool)vk_isDark;
- (bool)vk_isOptimizedForMac;
- (bool)vk_isRTL;
- (void)vk_performAsCurrent:(id /* block */)arg1;
- (bool)vk_shouldUseLargeButtons;
- (id)vk_traitCollectionClampedToNonaccessibilityContentSize;
- (id)vk_traitCollectionWithContentSize:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (bool)isLargeTextTraitCollection;

@end
