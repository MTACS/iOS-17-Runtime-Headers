
@protocol DDRResetObserver <NSObject>

@optional

- (void)resetService:(DDRResetService *)arg1 didBeginDataResetWithMode:(long long)arg2;
- (void)resetService:(void *)arg1 didCompleteDataResetMode:(void *)arg2 withError:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: DDRResetService *, long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)resetService:(DDRResetService *)arg1 willBeginDataResetWithMode:(long long)arg2;

@end
