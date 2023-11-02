
@protocol HUMediaSelectionViewControllerDelegate <NSObject>

@required

- (NSString *)mediaSelectionViewController:(HUMediaSelectionViewController *)arg1 messageForMediaPickerUnavailableReason:(long long)arg2;
- (NSString *)mediaSelectionViewControllerMessageForMediaActionPlayUnavailable:(HUMediaSelectionViewController *)arg1;

@end
