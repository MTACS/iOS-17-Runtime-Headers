
@interface _EMMessageRepositoryCountingQueryObserver : NSObject <EMMessageRepositoryCountQueryObserver_xpc, EMRecoverableObserver> {
    <EMMessageRepositoryCountQueryObserver> * _observer;
    EMQuery * _query;
    EFPair * _queryIdentifier;
    EMMessageRepository * _repository;
    EMMailboxScope * _serverCountMailboxScope;
    EFCancelationToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) EFPair *queryIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performQueryWithRemoteConnection:(id)arg1 forRecovery:(bool)arg2;
- (void)cancel;
- (void)countDidChange:(long long)arg1 acknowledgementToken:(id)arg2;
- (void)dealloc;
- (id)initWithRepository:(id)arg1 queryIdentifier:(id)arg2 includingServerCountsForMailboxScope:(id)arg3 observer:(id)arg4;
- (void)performWithRemoteConnection:(id)arg1;
- (id)queryIdentifier;
- (void)recoverWithRemoteConnection:(id)arg1;

@end
