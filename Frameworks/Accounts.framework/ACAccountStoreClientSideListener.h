
@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreClientProtocol> {
    <ACRemoteAccountStoreSessionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1;
- (void)accountDidChange:(id)arg1 withChangeType:(int)arg2;
- (void)connectionWasInvalidated;
- (id)initWithDelegate:(id)arg1;

@end
