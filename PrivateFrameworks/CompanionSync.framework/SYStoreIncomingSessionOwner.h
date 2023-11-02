
@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner

- (id)initWithIncomingSession:(id)arg1;
- (bool)isResetSync;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end
