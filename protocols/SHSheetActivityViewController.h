
@protocol SHSheetActivityViewController <NSObject>

@required

- (void)activityViewController:(UIActivityViewController *)arg1 traitCollectionDidChange:(UITraitCollection *)arg2;
- (void)activityViewControllerDidAppear:(UIActivityViewController *)arg1;
- (void)activityViewControllerDidDisappear:(UIActivityViewController *)arg1;
- (void)activityViewControllerDidResignContentViewControllerOfPopover:(UIActivityViewController *)arg1;
- (void)activityViewControllerSizeWillChange:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillAppear:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillBeEmbedded:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillBePresented:(UIActivityViewController *)arg1;
- (void)activityViewControllerWillDisappear:(UIActivityViewController *)arg1;

@end
