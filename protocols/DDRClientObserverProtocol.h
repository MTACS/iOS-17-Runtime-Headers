
@protocol DDRClientObserverProtocol <NSObject>

@required

- (void)didBeginDataResetWithMode:(long long)arg1;
- (void)didCompleteDataResetMode:(void *)arg1 withError:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)willBeginDataResetWithMode:(long long)arg1;

@end
