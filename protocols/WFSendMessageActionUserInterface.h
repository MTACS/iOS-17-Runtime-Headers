
@protocol WFSendMessageActionUserInterface <WFActionRemoteUserInterface>

@required

- (void)showWithRecipients:(void *)arg1 content:(void *)arg2 attachments:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSendUserInterfaceResult *, NSError *, void*

@end
