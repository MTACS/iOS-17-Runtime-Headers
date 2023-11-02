
@interface _EMOneTimeCodeObserver : NSObject <EMRecoverableObserver> {
    <EMOneTimeCodeObserver_xpc> * _observer;
    EFCancelationToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performWithRemoteConnection:(id)arg1 forRecovery:(bool)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;
- (void)performWithRemoteConnection:(id)arg1;
- (void)recoverWithRemoteConnection:(id)arg1;

@end
