
@protocol MFMessageComposeViewControllerInternalDelegate <MFMessageComposeViewControllerDelegate>

@required

- (void)messageComposeViewController:(void *)arg1 shouldSendMessage:(void *)arg2 toRecipients:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: MFMessageComposeViewController *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)messageComposeViewControllerDidShowEntryViewContent:(MFMessageComposeViewController *)arg1;

@end
