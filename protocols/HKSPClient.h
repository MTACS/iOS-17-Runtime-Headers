
@protocol HKSPClient

@required

- (void)clientShouldCheckInWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSPSyncAnchorContainer *, NSError *, void*
- (void)getClientIdentifierWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSPXPCClientIdentifier *, NSError *, void*

@end
