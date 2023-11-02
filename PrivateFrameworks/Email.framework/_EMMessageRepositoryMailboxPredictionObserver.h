
@interface _EMMessageRepositoryMailboxPredictionObserver : NSObject <EMMessageRepositoryMailboxPredictionObserver_xpc, EMRecoverableObserver> {
    EFCancelationToken * _cancelationToken;
    id /* block */  _completionHandler;
    NSArray * _messageObjectIDs;
}

@property (nonatomic, readonly) EFCancelationToken *cancelationToken;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *messageObjectIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performWithRemoteConnection:(id)arg1 forRecovery:(bool)arg2;
- (void)cancel;
- (id)cancelationToken;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithMessageObjectIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)mailboxWasPredicted:(id)arg1;
- (id)messageObjectIDs;
- (void)performWithRemoteConnection:(id)arg1;
- (void)recoverWithRemoteConnection:(id)arg1;

@end
