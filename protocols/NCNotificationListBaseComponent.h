
@protocol NCNotificationListBaseComponent <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>

@required

+ (NSSet *)presentableTypes;

- (void)clearAll;
- (unsigned long long)count;

@end
