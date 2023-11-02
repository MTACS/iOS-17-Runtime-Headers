
@interface PRPosterMutableConfiguredProperties : PRPosterConfiguredProperties

@property (nonatomic, copy) PRPosterAmbientConfiguration *ambientConfiguration;
@property (nonatomic, copy) PRPosterAmbientWidgetLayout *ambientWidgetLayout;
@property (nonatomic, copy) PRPosterColorVariationsConfiguration *colorVariationsConfiguration;
@property (nonatomic, copy) PRPosterComplicationLayout *complicationLayout;
@property (nonatomic, copy) PRPosterFocusConfiguration *focusConfiguration;
@property (nonatomic, copy) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (nonatomic, copy) PRPosterMetadata *otherMetadata;
@property (nonatomic, copy) PRPosterRenderingConfiguration *renderingConfiguration;
@property (nonatomic, copy) PRPosterSuggestionMetadata *suggestionMetadata;
@property (nonatomic, copy) PRPosterTitleStyleConfiguration *titleStyleConfiguration;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (bool)_isImmutable;
- (void)mergeConfiguredProperties:(id)arg1;

@end
