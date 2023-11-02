
@protocol HUEditActionDelegate

@required

- (NSString *)editActionTitle;
- (NSString *)editActionTitleLocalizationKey;
- (void)endEditing;
- (void)startEditing;
- (bool)supportsEditing;

@optional

- (void)sendContextMenuMetricsWithTitleLocalizationKey:(NSString *)arg1;

@end
