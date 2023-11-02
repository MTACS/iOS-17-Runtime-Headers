
@interface PRPosterConfiguredProperties : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    PRPosterAmbientConfiguration * _ambientConfiguration;
    PRPosterAmbientWidgetLayout * _ambientWidgetLayout;
    PRPosterColorVariationsConfiguration * _colorVariationsConfiguration;
    PRPosterComplicationLayout * _complicationLayout;
    PRPosterFocusConfiguration * _focusConfiguration;
    PRPosterHomeScreenConfiguration * _homeScreenConfiguration;
    PRPosterMetadata * _otherMetadata;
    NSString * _persistenceIdentifierWithComplications;
    NSString * _persistenceIdentifierWithoutComplications;
    PRPosterRenderingConfiguration * _renderingConfiguration;
    PRPosterSuggestionMetadata * _suggestionMetadata;
    PRPosterTitleStyleConfiguration * _titleStyleConfiguration;
}

@property (nonatomic, copy) PRPosterAmbientConfiguration *ambientConfiguration;
@property (nonatomic, copy) PRPosterAmbientWidgetLayout *ambientWidgetLayout;
@property (nonatomic, copy) PRPosterColorVariationsConfiguration *colorVariationsConfiguration;
@property (nonatomic, copy) PRPosterComplicationLayout *complicationLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PRPosterFocusConfiguration *focusConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (nonatomic, copy) PRPosterMetadata *otherMetadata;
@property (nonatomic, copy) PRPosterRenderingConfiguration *renderingConfiguration;
@property (nonatomic, copy) PRPosterSuggestionMetadata *suggestionMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) PRPosterTitleStyleConfiguration *titleStyleConfiguration;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)configuredPropertiesSanitizedForPassingToExtension:(id)arg1;
+ (id)defaultConfiguredPropertiesForRole:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isImmutable;
- (id)ambientConfiguration;
- (id)ambientWidgetLayout;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)colorVariationsConfiguration;
- (id)complicationLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)focusConfiguration;
- (unsigned long long)hash;
- (id)homeScreenConfiguration;
- (id)init;
- (id)initWithAmbientConfiguration:(id)arg1 widgetLayout:(id)arg2 otherMetadata:(id)arg3;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitleStyleConfiguration:(id)arg1 focusConfiguration:(id)arg2 complicationLayout:(id)arg3 renderingConfiguration:(id)arg4 homeScreenConfiguration:(id)arg5 colorVariationsConfiguration:(id)arg6 ambientConfiguration:(id)arg7 ambientWidgetLayout:(id)arg8 suggestionMetadata:(id)arg9 otherMetadata:(id)arg10;
- (id)initWithTitleStyleConfiguration:(id)arg1 focusConfiguration:(id)arg2 complicationLayout:(id)arg3 renderingConfiguration:(id)arg4 homeScreenConfiguration:(id)arg5 colorVariationsConfiguration:(id)arg6 suggestionMetadata:(id)arg7 otherMetadata:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguredProperties:(id)arg1;
- (bool)isEqualToConfiguredProperties:(id)arg1 comparingPropertiesAffectingSnapshotsOnly:(bool)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)otherMetadata;
- (id)persistenceIdentifierWithComplications:(bool)arg1;
- (id)renderingConfiguration;
- (void)setAmbientConfiguration:(id)arg1;
- (void)setAmbientWidgetLayout:(id)arg1;
- (void)setColorVariationsConfiguration:(id)arg1;
- (void)setComplicationLayout:(id)arg1;
- (void)setFocusConfiguration:(id)arg1;
- (void)setHomeScreenConfiguration:(id)arg1;
- (void)setOtherMetadata:(id)arg1;
- (void)setRenderingConfiguration:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setTitleStyleConfiguration:(id)arg1;
- (id)suggestionMetadata;
- (id)titleStyleConfiguration;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_configuredPropertiesForPreview:(id)arg1;

@end
