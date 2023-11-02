
@interface AFAudioSessionAssertionConnection : NSObject <AFInvalidating, AFRelinquishableAssertion> {
    AFAssertionContext * _acquisitionContext;
    AFInstanceContext * _instanceContext;
    NSObject<OS_dispatch_queue> * _queue;
    AFTwoArgumentSafetyBlock * _relinquishmentHandler;
    NSUUID * _uuid;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) AFAssertionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_acquireWithContext:(id)arg1;
- (void)_clearXPCConnection;
- (void)_finalizeWithContext:(id)arg1 error:(id)arg2;
- (void)_relinquishWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3;
- (id)_xpcConnection;
- (id)context;
- (void)dealloc;
- (id)description;
- (void)handleXPCConnectionInterrupted;
- (void)handleXPCConnectionInvalidated;
- (id)initWithInstanceContext:(id)arg1 acquisitionContext:(id)arg2 relinquishmentHandler:(id /* block */)arg3;
- (void)invalidate;
- (void)relinquishWithContext:(id)arg1 options:(unsigned long long)arg2;
- (void)relinquishWithError:(id)arg1 options:(unsigned long long)arg2;
- (id)uuid;

@end
