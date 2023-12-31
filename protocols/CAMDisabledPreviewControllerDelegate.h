
@protocol CAMDisabledPreviewControllerDelegate <NSObject>

@required

- (void)disabledPreviewController:(CAMDisabledPreviewController *)arg1 wantsPreviewDisabledForReason:(long long)arg2;
- (void)disabledPreviewController:(CAMDisabledPreviewController *)arg1 wantsPreviewEnabledForReason:(long long)arg2;

@end
