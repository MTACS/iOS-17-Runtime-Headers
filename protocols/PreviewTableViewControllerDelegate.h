
@protocol PreviewTableViewControllerDelegate <NSObject>

@required

- (NSURL *)previewTableViewController:(PreviewTableViewController *)arg1 URLForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIMenu *)previewTableViewController:(PreviewTableViewController *)arg1 menuForRowAtIndexPath:(NSIndexPath *)arg2;

@end
