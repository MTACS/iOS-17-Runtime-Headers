
@protocol SFStartPageCustomizationDataSource <NSObject>

@required

- (NSItemProvider *)backgroundImageForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (bool)isBackgroundImageEnabledForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (bool)isCloudSyncAvailableForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (bool)isCloudSyncEnabledForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (NSArray *)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 customizationItemsForCustomizationVariant:(long long)arg2;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didCustomizeItems:(NSArray *)arg2 withVariant:(long long)arg3;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didModifyBackgroundImageEnabled:(bool)arg2;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didSelectBuiltInBackgroundImageAtURL:(NSURL *)arg2 precomputedLuminance:(double)arg3;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didSelectCustomBackgroundImage:(NSItemProvider *)arg2;
- (void)startPageCustomizationViewControllerDidDisableCloudSync:(SFStartPageCustomizationViewController *)arg1;
- (void)startPageCustomizationViewControllerDidEnableCloudSync:(SFStartPageCustomizationViewController *)arg1 withPreference:(long long)arg2;
- (<TabGroupProvider> *)tabGroupProviderForCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;

@optional

- (void)didReorderSectionIdentifiersForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 willModifyBackgroundImageEnabled:(bool)arg2;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 willModifySectionWithIdentifier:(id)arg2 enabled:(bool)arg3;
- (void)startPageCustomizationViewControllerDidFinish:(SFStartPageCustomizationViewController *)arg1;

@end
