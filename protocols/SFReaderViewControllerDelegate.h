
@protocol SFReaderViewControllerDelegate

@required

- (void)contextMenuConfigurationForReaderViewController:(void *)arg1 element:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: SFReaderViewController *, WKContextMenuElementInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIContextMenuConfiguration *, void*
- (void)readerViewController:(SFReaderViewController *)arg1 contextMenuDidEndForElement:(WKContextMenuElementInfo *)arg2;
- (void)readerViewController:(SFReaderViewController *)arg1 contextMenuForElement:(WKContextMenuElementInfo *)arg2 willCommitWithAnimator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)readerViewController:(SFReaderViewController *)arg1 contextMenuWillPresentForElement:(WKContextMenuElementInfo *)arg2;

@end
