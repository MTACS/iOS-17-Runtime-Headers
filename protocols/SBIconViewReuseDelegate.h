
@protocol SBIconViewReuseDelegate <NSObject>

@optional

- (UIView *)iconView:(SBIconView *)arg1 backgroundViewForComponentsOfType:(long long)arg2;
- (UIView<SBIconAccessoryView> *)iconView:(SBIconView *)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (UIView<SBIconLabelAccessoryView> *)iconView:(SBIconView *)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (SBIconLabelImage *)iconView:(SBIconView *)arg1 labelImageWithParameters:(SBIconLabelImageParameters *)arg2;
- (bool)iconView:(SBIconView *)arg1 shouldContinueToUseBackgroundViewForComponents:(UIView *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconImageView:(SBIconImageView *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconLabelAccessoryView:(UIView<SBIconLabelAccessoryView> *)arg2;
- (SBIconImageView *)imageViewForIconView:(SBIconView *)arg1;
- (<SBIconViewSnapshotProviding> *)screenSnapshotProviderForComponentsOfIconView:(SBIconView *)arg1;

@end
