
@protocol MCMReply <NSObject>

@required

- (void)dispatchSyncToFastWorkloopWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)encodeResult:(id <MCMResult>)arg1;
- (bool)exitAfterSend;
- (void)handoffToSlowWorkloopforClientIdentity:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 6: MCMClientIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)invalidate;
- (void)send;
- (void)setExitAfterSend:(bool)arg1;

@end
