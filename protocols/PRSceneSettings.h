
@protocol PRSceneSettings

@required

- (BSColor *)pr_caseColor;
- (long long)pr_deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_horizontalTitleBoundingRect;
- (bool)pr_isAlternateDateEnabled;
- (bool)pr_isComplicationRowConfigured;
- (bool)pr_isComplicationSidebarConfigured;
- (bool)pr_isDepthEffectDisallowed;
- (bool)pr_isInlineComplicationConfigured;
- (bool)pr_isInvalidated;
- (bool)pr_isParallaxDisallowed;
- (bool)pr_isParallaxEffectivelyEnabled;
- (bool)pr_isParallaxEnabled;
- (bool)pr_isWallpaperObscured;
- (PRPosterConfigurableOptions *)pr_posterConfigurableOptions;
- (PRPosterConfiguredProperties *)pr_posterConfiguredProperties;
- (PRSServerPosterPath *)pr_posterContents;
- (NSString *)pr_previewIdentifier;
- (NSString *)pr_provider;
- (NSString *)pr_role;
- (bool)pr_showsComplications;
- (bool)pr_showsHeaderElements;
- (NSString *)pr_snapshotDefinitionIdentifier;
- (NSString *)pr_snapshotLogIdentifier;
- (long long)pr_userInterfaceStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_verticalTitleBoundingRect;

@end
