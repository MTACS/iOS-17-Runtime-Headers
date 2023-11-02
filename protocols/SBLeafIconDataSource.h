
@protocol SBLeafIconDataSource <NSObject>

@required

- (NSString *)icon:(SBLeafIcon *)arg1 displayNameForLocation:(NSString *)arg2;
- (unsigned long long)priorityForIcon:(SBLeafIcon *)arg1;

@optional

- (long long)accessoryTypeForIcon:(SBLeafIcon *)arg1;
- (id)badgeNumberOrStringForIcon:(SBLeafIcon *)arg1;
- (bool)canGenerateIconsInBackgroundForIcon:(SBLeafIcon *)arg1;
- (NSString *)configurationStorageIdentifier;
- (long long)dataOwnershipRoleAsDragDropTargetForIcon:(SBLeafIcon *)arg1;
- (NSString *)folderFallbackTitleForIcon:(SBLeafIcon *)arg1;
- (NSArray *)folderTitleOptionsForIcon:(SBLeafIcon *)arg1;
- (NSString *)formattedAccessoryStringForIcon:(SBLeafIcon *)arg1;
- (NSArray *)iTunesCategoriesOrderedByRelevancyForIcon:(SBLeafIcon *)arg1;
- (UIImage *)icon:(SBLeafIcon *)arg1 defaultImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (NSString *)icon:(SBLeafIcon *)arg1 displayNameForObscuredDisabledLaunchForLocation:(NSString *)arg2;
- (UIImage *)icon:(SBLeafIcon *)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)icon:(SBLeafIcon *)arg1 launchFromLocation:(NSString *)arg2 context:(id)arg3;
- (NSString *)icon:(SBLeafIcon *)arg1 statusDescriptionForLocation:(NSString *)arg2;
- (UIImage *)icon:(SBLeafIcon *)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)iconAllowsLaunch:(SBLeafIcon *)arg1;
- (bool)iconCanTightenLabel:(SBLeafIcon *)arg1;
- (bool)iconCanTruncateLabel:(SBLeafIcon *)arg1;
- (bool)iconCompleteUninstall:(SBLeafIcon *)arg1;
- (bool)iconDisallowsLaunchForObscuredReason:(SBLeafIcon *)arg1;
- (bool)iconShouldIgnoreOtherDataSources:(SBLeafIcon *)arg1;
- (bool)iconSupportsConfiguration:(SBLeafIcon *)arg1;
- (bool)iconSupportsRasterization:(SBLeafIcon *)arg1;
- (bool)iconSupportsUninstall:(SBLeafIcon *)arg1;
- (bool)isProgressPausedForIcon:(SBLeafIcon *)arg1;
- (bool)isTimedOutForIcon:(SBIcon *)arg1;
- (long long)labelAccessoryTypeForIcon:(SBLeafIcon *)arg1;
- (double)progressPercentForIcon:(SBLeafIcon *)arg1;
- (long long)progressStateForIcon:(SBLeafIcon *)arg1;
- (unsigned long long)supportedGridSizeClassesForIcon:(SBLeafIcon *)arg1;
- (NSArray *)tagsForIcon:(SBLeafIcon *)arg1;
- (NSString *)uniqueIdentifier;

@end
