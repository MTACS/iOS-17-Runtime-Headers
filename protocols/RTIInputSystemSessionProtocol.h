
@protocol RTIInputSystemSessionProtocol <NSObject>

@required

- (oneway void)beginRemoteTextInputSessionWithID:(NSUUID *)arg1 documentTraits:(RTIDocumentTraits *)arg2 initialDocumentState:(RTIDocumentState *)arg3;
- (oneway void)endRemoteTextInputSessionWithID:(NSUUID *)arg1;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 documentDidChange:(RTIDocumentState *)arg2;

@optional

- (oneway void)beginRemoteTextInputSessionWithID:(NSUUID *)arg1 options:(RTISessionOptions *)arg2 documentTraits:(RTIDocumentTraits *)arg3 initialDocumentState:(RTIDocumentState *)arg4;
- (oneway void)endRemoteTextInputSessionWithID:(NSUUID *)arg1 options:(RTISessionOptions *)arg2;
- (oneway void)endRemoteTextInputSessionWithID:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSUUID *, RTISessionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 didAddRTISupplementalLexicon:(RTISupplementalLexicon *)arg2;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 didAddSupplementalLexicon:(TISupplementalLexicon *)arg2;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 didChangePause:(bool)arg2 withReason:(NSString *)arg3;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 didRemoveRTISupplementalLexiconWithIdentifier:(unsigned long long)arg2;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)arg2;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 documentTraitsDidChange:(RTIDocumentTraits *)arg2;
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 performInputOperation:(RTIInputOperation *)arg2;
- (void)remoteTextInputSessionWithID:(void *)arg1 performInputOperation:(void *)arg2 withResponse:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, RTIInputOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (oneway void)remoteTextInputSessionWithID:(NSUUID *)arg1 textSuggestionsChanged:(NSData *)arg2;

@end
