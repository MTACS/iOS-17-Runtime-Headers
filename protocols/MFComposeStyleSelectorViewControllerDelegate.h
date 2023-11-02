
@protocol MFComposeStyleSelectorViewControllerDelegate <NSObject>

@required

- (void)composeStyleSelector:(MFComposeStyleSelectorViewController *)arg1 didChangeFont:(UIFont *)arg2;
- (void)composeStyleSelector:(MFComposeStyleSelectorViewController *)arg1 didChangeFontSize:(double)arg2;
- (void)composeStyleSelector:(MFComposeStyleSelectorViewController *)arg1 didChangeTextColor:(UIColor *)arg2;
- (void)composeStyleSelector:(MFComposeStyleSelectorViewController *)arg1 didSelectStyle:(MFComposeTextStyle *)arg2;
- (void)composeStyleSelectorDidCancel:(MFComposeStyleSelectorViewController *)arg1;

@optional

- (void)composeStyleSelectorDidDismissFontPicker:(MFComposeStyleSelectorViewController *)arg1;
- (void)composeStyleSelectorDidPresentColorPicker:(MFComposeStyleSelectorViewController *)arg1;
- (UIViewController *)presentingViewControllerForComposeStyleSelector:(MFComposeStyleSelectorViewController *)arg1;

@end
