
@interface CHSWidgetDescriptor : CHSBaseDescriptor <CHSWidgetIdentifiable, CHSWidgetPersonality, NSMutableCopying, NSSecureCoding, SBHAddWidgetSheetGalleryItem> {
    bool  _backgroundRemovable;
    INCWidgetIntentProvider * _defaultIntentProvider;
    CHSIntentReference * _defaultIntentReference;
    bool  _didMigrateToRecommendationsContainer;
    NSDictionary * _disfavoredLocations;
    bool  _enablesMultipleTapTargets;
    NSMutableArray * _fetchDefaultIntentCompletions;
    CHSIntentRecommendationsContainer * _intentRecommendationsContainer;
    NSString * _intentType;
    NSString * _kind;
    bool  _supportsInteraction;
    long long  _widgetVisibility;
}

@property (nonatomic, readonly) bool _didMigrateToRecommendationsContainer;
@property (nonatomic, readonly, copy) UIColor *accentColor;
@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (getter=isBackgroundRemovable, nonatomic, readonly) bool backgroundRemovable;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) INIntent *defaultIntent;
@property (nonatomic, readonly, copy) CHSIntentReference *defaultIntentReference;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *disfavoredLocations;
@property (nonatomic, readonly) bool enablesMultipleTapTargets;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) CHSExtensionIdentity *extensionIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *intentRecommendations;
@property (nonatomic, readonly) CHSIntentRecommendationsContainer *intentRecommendationsContainer;
@property (nonatomic, readonly, copy) NSString *intentType;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) UIColor *mostInterestingColor;
@property (nonatomic, readonly, copy) NSString *sbh_appName;
@property (nonatomic, readonly) bool sbh_canBeAddedToStack;
@property (nonatomic, readonly, copy) NSString *sbh_galleryItemIdentifier;
@property (nonatomic, readonly) <SBLeafIconDataSource> *sbh_iconDataSource;
@property (nonatomic, readonly) unsigned long long sbh_supportedSizeClasses;
@property (nonatomic, readonly) bool sbh_supportsRemovableBackground;
@property (nonatomic, readonly) bool sbh_supportsRemovableBackgroundOrAccessoryFamilies;
@property (nonatomic, readonly, copy) NSString *sbh_widgetDescription;
@property (nonatomic, readonly, copy) NSString *sbh_widgetName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedSizeClasses;
@property (nonatomic, readonly) bool supportsInteraction;
@property (getter=isTransparent, nonatomic, readonly) bool transparent;
@property (nonatomic, readonly) long long widgetVisibility;

// Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_didMigrateToRecommendationsContainer;
- (id)_initWithDescriptor:(id)arg1;
- (id)_intentDescription;
- (id)cachedDefaultIntent;
- (id)copyAsCHSAvocadoDescriptor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultIntent;
- (id)defaultIntentReference;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)disfavoredFamiliesForLocation:(unsigned long long)arg1;
- (id)disfavoredLocations;
- (bool)enablesMultipleTapTargets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFromDescriptor:(id)arg1 includeIntents:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 intentType:(id)arg5 supportedSizeClasses:(unsigned long long)arg6 widgetDescription:(id)arg7 widgetVisibility:(long long)arg8;
- (id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 supportedFamilies:(unsigned long long)arg4 intentType:(id)arg5;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 supportedFamilies:(unsigned long long)arg3 intentType:(id)arg4;
- (id)initWithExtensionIdentity:(id)arg1 kind:(id)arg2 supportedFamilies:(unsigned long long)arg3 intentType:(id)arg4;
- (id)intentRecommendations;
- (id)intentRecommendationsContainer;
- (id)intentType;
- (bool)isBackgroundRemovable;
- (bool)isEqual:(id)arg1;
- (bool)isInternal;
- (bool)isTransparent;
- (id)kind;
- (void)loadDefaultIntent:(id /* block */)arg1;
- (unsigned long long)locationsDisfavoredByFamily:(long long)arg1;
- (bool)matches:(id)arg1;
- (bool)matchesPersonality:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setDefaultIntent:(id)arg1;
- (void)setDefaultIntentReference:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedSizeClasses;
- (bool)supportsInteraction;
- (id)widgetForFamily:(long long)arg1 intent:(id)arg2;
- (long long)widgetVisibility;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (bool)atx_hasAccessoryWidgetFamiliesOnly;
- (bool)atx_hasHomeScreenWidgetFamilies;
- (bool)atx_hasHomeScreenWidgetFamiliesOnly;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (unsigned long long)atx_layoutOptions;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (bool)pr_isVisibilityWidgetDefined:(long long)arg1;
- (bool)pr_isVisibleByDefault;
- (bool)pr_shouldDisplayInGallery;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (void)_loadColorsBackgroundColor:(id*)arg1 accentColor:(id*)arg2;
- (void)_loadColorsFromExtensionForBundleIdentifier:(id)arg1 backgroundColor:(id*)arg2 accentColor:(id*)arg3;
- (void)_loadColorsFromShortcutsForBundleIdentifier:(id)arg1 backgroundColor:(id*)arg2 accentColor:(id*)arg3;
- (unsigned long long)_widgetLocationStyleForAddWidgetSheetLocation:(unsigned long long)arg1;
- (id)accentColor;
- (id)backgroundColor;
- (id)mostInterestingColor;
- (id)sanitizedDescriptor;
- (id)sbh_appName;
- (bool)sbh_canBeAddedToStack;
- (unsigned long long)sbh_disfavoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (unsigned long long)sbh_favoredSizeClassesForAddWidgetSheetLocation:(unsigned long long)arg1;
- (id)sbh_galleryItemIdentifier;
- (id)sbh_iconDataSource;
- (bool)sbh_isLinkedOnOrAfter:(unsigned long long)arg1;
- (unsigned long long)sbh_supportedSizeClasses;
- (bool)sbh_supportsRemovableBackground;
- (bool)sbh_supportsRemovableBackgroundOrAccessoryFamilies;
- (id)sbh_widgetDescription;
- (id)sbh_widgetName;

@end
