
@protocol MFMailComposeContactsSearchControllerDelegate <NSObject>

@required

- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didFindCorecipients:(NSArray *)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 didSortResults:(NSArray *)arg2;
- (void)composeContactsSearchController:(MFMailComposeContactsSearchController *)arg1 finishedWithResults:(bool)arg2;
- (MFMailAccountProxy *)sendingAccountProxyForComposeContactsSearchController:(MFMailComposeContactsSearchController *)arg1;

@end
