
@protocol PRMutableSceneSettings <PRSceneSettings>

@required

- (BSColor *)pr_caseColor;
- (long long)pr_deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_horizontalTitleBoundingRect;
- (bool)pr_isAlternateDateEnabled;
- (bool)pr_isComplicationRowConfigured;
- (bool)pr_isComplicationSidebarConfigured;
- (bool)pr_isDepthEffectDisallowed;
- (bool)pr_isInlineComplicationConfigured;
- (bool)pr_isParallaxDisallowed;
- (bool)pr_isParallaxEnabled;
- (bool)pr_isWallpaperObscured;
- (PRPosterConfigurableOptions *)pr_posterConfigurableOptions;
- (PRPosterConfiguredProperties *)pr_posterConfiguredProperties;
- (PRSServerPosterPath *)pr_posterContents;
- (NSString *)pr_previewIdentifier;
- (NSString *)pr_provider;
- (NSString *)pr_role;
- (void)pr_setAlternateDateEnabled:(bool)arg1;
- (void)pr_setCaseColor:(BSColor *)arg1;
- (void)pr_setComplicationRowConfigured:(bool)arg1;
- (void)pr_setComplicationSidebarConfigured:(bool)arg1;
- (void)pr_setDepthEffectDisallowed:(bool)arg1;
- (void)pr_setDeviceOrientation:(long long)arg1;
- (void)pr_setHorizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setInlineComplicationConfigured:(bool)arg1;
- (void)pr_setInvalidated;
- (void)pr_setParallaxDisallowed:(bool)arg1;
- (void)pr_setParallaxEnabled:(bool)arg1;
- (void)pr_setPosterConfigurableOptions:(PRPosterConfigurableOptions *)arg1;
- (void)pr_setPosterConfiguredProperties:(PRPosterConfiguredProperties *)arg1;
- (void)pr_setPosterContents:(PRSServerPosterPath *)arg1;
- (void)pr_setPreviewIdentifier:(NSString *)arg1;
- (void)pr_setProvider:(NSString *)arg1;
- (void)pr_setRole:(NSString *)arg1;
- (void)pr_setShowsComplications:(bool)arg1;
- (void)pr_setShowsHeaderElements:(bool)arg1;
- (void)pr_setSnapshotDefinitionIdentifier:(NSString *)arg1;
- (void)pr_setSnapshotLogIdentifier:(NSString *)arg1;
- (void)pr_setUserInterfaceStyle:(long long)arg1;
- (void)pr_setVerticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setWallpaperObscured:(bool)arg1;
- (bool)pr_showsComplications;
- (bool)pr_showsHeaderElements;
- (NSString *)pr_snapshotDefinitionIdentifier;
- (NSString *)pr_snapshotLogIdentifier;
- (long long)pr_userInterfaceStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_verticalTitleBoundingRect;

@end
