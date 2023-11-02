
@protocol WFSendEmailActionUserInterface <WFActionRemoteUserInterface>

@required

- (void)showWithEmailContent:(void *)arg1 preferredSendingEmailAddress:(void *)arg2 isManaged:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: WFSendEmailContent *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFSendUserInterfaceResult *, NSError *, void*

@end
