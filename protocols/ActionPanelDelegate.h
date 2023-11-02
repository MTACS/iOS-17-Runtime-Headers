
@protocol ActionPanelDelegate <_SFActivityViewControllerDelegate>

@required

- (void)actionPanel:(void *)arg1 prepareForMailActivityWithMailController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: ActionPanel *, MFMailComposeViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)actionPanelAddTabDocumentToReadingList:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ActionPanel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (DownloadsViewController *)downloadsViewControllerForActionPanel:(ActionPanel *)arg1;

@end
