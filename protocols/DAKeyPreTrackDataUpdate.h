
@protocol DAKeyPreTrackDataUpdate <NSObject>

@required

- (void)getPreTrackRequestForKeyWithIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DAAlishaKeyEncryptedRequest *, NSError *, void*
- (void)ppidRequestForInvitationWithIdentifier:(void *)arg1 fromMailboxIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DAAlishaKeyEncryptedRequest *, NSError *, void*
- (void)readerInformationForInvitationWithIdentifier:(void *)arg1 fromMailboxIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestBindingAttestationDataForKeyWithIdentifier:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DAKeyBindingAttestationRequestData *, NSError *, void*
- (void)setBindingAttestation:(void *)arg1 forKeyWithIdentifier:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
